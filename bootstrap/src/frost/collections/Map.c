#include "frost/collections/Map.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/MapWriter.h"
#include "frost/collections/MapView.h"


struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$Map$_frost$collections$Map = { (frost$core$Class*) &frost$collections$Map$class, NULL, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } frost$collections$Map$_frost$collections$MapWriter = { (frost$core$Class*) &frost$collections$MapWriter$class, (ITable*) &frost$collections$Map$_frost$collections$Map, { NULL, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$Map$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, (ITable*) &frost$collections$Map$_frost$collections$MapWriter, { NULL, NULL, NULL, NULL, NULL} };

static frost$core$String $s1;
frost$collections$Map$class_type frost$collections$Map$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Map$_frost$collections$MapView, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70", 21, -2661935809904785896, NULL };







