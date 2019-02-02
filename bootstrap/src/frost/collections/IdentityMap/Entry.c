#include "frost/collections/IdentityMap/Entry.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Frost.h"


static frost$core$String $s1;
frost$collections$IdentityMap$Entry$class_type frost$collections$IdentityMap$Entry$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$collections$IdentityMap$Entry$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x64\x65\x6e\x74\x69\x74\x79\x4d\x61\x70\x2e\x45\x6e\x74\x72\x79", 35, 4505896286660002442, NULL };

void frost$collections$IdentityMap$Entry$init$frost$collections$IdentityMap$Entry$K$frost$collections$IdentityMap$Entry$V(frost$collections$IdentityMap$Entry* param0, frost$core$Object* param1, frost$core$Object* param2) {

// line 29
frost$core$Frost$ref$frost$core$Object$Q(param1);
frost$core$Object** $tmp2 = &param0->key;
frost$core$Object* $tmp3 = *$tmp2;
frost$core$Frost$unref$frost$core$Object$Q($tmp3);
frost$core$Object** $tmp4 = &param0->key;
*$tmp4 = param1;
// line 30
frost$core$Frost$ref$frost$core$Object$Q(param2);
frost$core$Object** $tmp5 = &param0->value;
frost$core$Object* $tmp6 = *$tmp5;
frost$core$Frost$unref$frost$core$Object$Q($tmp6);
frost$core$Object** $tmp7 = &param0->value;
*$tmp7 = param2;
return;

}
void frost$collections$IdentityMap$Entry$cleanup(frost$collections$IdentityMap$Entry* param0) {

// line 14
frost$core$Object$cleanup(((frost$core$Object*) param0));
frost$core$Object** $tmp8 = &param0->key;
frost$core$Object* $tmp9 = *$tmp8;
frost$core$Frost$unref$frost$core$Object$Q($tmp9);
frost$core$Object** $tmp10 = &param0->value;
frost$core$Object* $tmp11 = *$tmp10;
frost$core$Frost$unref$frost$core$Object$Q($tmp11);
frost$collections$IdentityMap$Entry** $tmp12 = &param0->next;
frost$collections$IdentityMap$Entry* $tmp13 = *$tmp12;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp13));
return;

}

