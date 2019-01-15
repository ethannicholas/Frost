#include "frost/collections/ListWriter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"


struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$ListWriter$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[3]; } frost$collections$ListWriter$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, (ITable*) &frost$collections$ListWriter$_frost$collections$CollectionWriter, { NULL, NULL, NULL} };

static frost$core$String $s1;
frost$collections$ListWriter$class_type frost$collections$ListWriter$class = { (frost$core$Class*) &frost$core$Class$class, -999, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListWriter$_frost$collections$ListWriter, { frost$core$Object$convert$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, -6157770983708103057, NULL };







