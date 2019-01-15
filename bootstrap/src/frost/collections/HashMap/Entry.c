#include "frost/collections/HashMap/Entry.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Key.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$collections$HashMap$Entry$class_type frost$collections$HashMap$Entry$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$convert$R$frost$core$String, frost$collections$HashMap$Entry$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x48\x61\x73\x68\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 31, 5505942370682069688, NULL };

void frost$collections$HashMap$Entry$init$frost$collections$HashMap$Entry$K$frost$collections$HashMap$Entry$V(frost$collections$HashMap$Entry* param0, frost$collections$Key* param1, frost$core$Object* param2) {

// line 35
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) param1));
frost$collections$Key** $tmp2 = &param0->key;
frost$collections$Key* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
frost$collections$Key** $tmp4 = &param0->key;
*$tmp4 = param1;
// line 36
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->value;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->value;
*$tmp7 = param2;
return;

}
void frost$collections$HashMap$Entry$cleanup(frost$collections$HashMap$Entry* param0) {

// line 20
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$collections$Key** $tmp8 = &param0->key;
frost$collections$Key* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp9));
frost$core$Object** $tmp10 = &param0->value;
frost$core$Object* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
frost$collections$HashMap$Entry** $tmp12 = &param0->next;
frost$collections$HashMap$Entry* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return;

}

