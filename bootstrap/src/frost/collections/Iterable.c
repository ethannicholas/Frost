#include "frost/collections/Iterable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"


struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Iterable$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, NULL, { NULL} };

static frost$core$String $s1;
frost$collections$Iterable$class_type frost$collections$Iterable$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Iterable$_frost$collections$Iterable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x49\x74\x65\x72\x61\x62\x6c\x65", 26, 4906885815162678826, NULL };







