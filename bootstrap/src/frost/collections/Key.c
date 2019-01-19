#include "frost/collections/Key.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"


struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$Key$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { NULL, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Key$_frost$collections$Key = { (frost$core$Class*) &frost$collections$Key$class, (ITable*) &frost$collections$Key$_frost$core$Equatable, { NULL} };

static frost$core$String $s1;
frost$collections$Key$class_type frost$collections$Key$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Key$_frost$collections$Key, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4b\x65\x79", 21, -2661935809904805885, NULL };







