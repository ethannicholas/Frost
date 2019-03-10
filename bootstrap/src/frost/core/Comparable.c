#include "frost/core/Comparable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Comparable$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$core$Comparable$_frost$core$Comparable = { (frost$core$Class*) &frost$core$Comparable$class, (ITable*) &frost$core$Comparable$_frost$core$Equatable, { NULL, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$Comparable$class_type frost$core$Comparable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$Comparable$_frost$core$Comparable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit, frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn4)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn8)(frost$core$Comparable*, frost$core$Comparable*);
typedef frost$core$Bit (*$fn15)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x43\x6f\x6d\x70\x61\x72\x61\x62\x6c\x65", 21, -9060234412520564052, NULL };

frost$core$Bit frost$core$Comparable$$LT$frost$core$Comparable$T$R$frost$core$Bit(frost$core$Comparable* param0, frost$core$Comparable* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Comparable.frost:13
ITable* $tmp2 = param1->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$core$Bit $tmp5 = $tmp3(param1, param0);
return $tmp5;

}
frost$core$Bit frost$core$Comparable$$GE$frost$core$Comparable$T$R$frost$core$Bit(frost$core$Comparable* param0, frost$core$Comparable* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Comparable.frost:18
ITable* $tmp6 = param0->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp6 = $tmp6->next;
}
$fn8 $tmp7 = $tmp6->methods[1];
frost$core$Bit $tmp9 = $tmp7(param0, param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Comparable.frost:18:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp10 = $tmp9.value;
bool $tmp11 = !$tmp10;
frost$core$Bit $tmp12 = (frost$core$Bit) {$tmp11};
return $tmp12;

}
frost$core$Bit frost$core$Comparable$$LE$frost$core$Comparable$T$R$frost$core$Bit(frost$core$Comparable* param0, frost$core$Comparable* param1) {

// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Comparable.frost:23
ITable* $tmp13 = param0->$class->itable;
while ($tmp13->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp13 = $tmp13->next;
}
$fn15 $tmp14 = $tmp13->methods[0];
frost$core$Bit $tmp16 = $tmp14(param0, param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Comparable.frost:23:16
// /Users/ethannicholas/Dropbox/Frost-Int/src/frost/core/Bit.frost:42
bool $tmp17 = $tmp16.value;
bool $tmp18 = !$tmp17;
frost$core$Bit $tmp19 = (frost$core$Bit) {$tmp18};
return $tmp19;

}






