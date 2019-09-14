#include "frost/core/Equatable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"


struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$core$Equatable$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
frost$core$Equatable$class_type frost$core$Equatable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$Equatable$_frost$core$Equatable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65", 20, -876306082143790564, NULL };

frost$core$Bit frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit(void* rawSelf, frost$core$Equatable* param1) {
frost$core$Equatable* param0 = (frost$core$Equatable*) rawSelf;

frost$core$Equatable* _1;
$fn2 _2;
frost$core$Bit _3;
bool _6;
bool _7;
frost$core$Bit _8;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Equatable.frost:18
_1 = param0;
ITable* $tmp3 = _1->$class->itable;
while ($tmp3->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp3 = $tmp3->next;
}
_2 = $tmp3->methods[0];
_3 = _2(_1, param1);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Equatable.frost:18:16
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Bit.frost:42
_6 = _3.value;
_7 = !_6;
_8 = (frost$core$Bit) {_7};
return _8;

}






