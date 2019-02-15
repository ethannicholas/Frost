#include "frost/collections/Map.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapView.h"
#include "frost/collections/MapWriter.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$Map$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { NULL, NULL, NULL, NULL, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$Map$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, (ITable*) &frost$collections$Map$_frost$collections$MapView, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$Map$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$Map$_frost$collections$Map, { NULL, NULL, NULL} };

static frost$core$String $s1;
frost$collections$Map$class_type frost$collections$Map$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Map$_frost$collections$MapWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70", 21, 3922554505511363106, NULL };







