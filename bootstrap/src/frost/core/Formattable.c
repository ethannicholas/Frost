#include "frost/core/Formattable.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"


struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$core$Formattable$_frost$core$Formattable = { (frost$core$Class*) &frost$core$Formattable$class, NULL, { NULL} };

static frost$core$String $s1;
frost$core$Formattable$class_type frost$core$Formattable$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$core$Formattable$_frost$core$Formattable, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x46\x6f\x72\x6d\x61\x74\x74\x61\x62\x6c\x65", 22, 4872307991516742361, NULL };







