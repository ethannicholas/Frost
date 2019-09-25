#include "frost/collections/Collection.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/collections/CollectionView.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

struct { frost$core$Class* cl; ITable* next; void* methods[0]; } frost$collections$Collection$_frost$collections$Collection = { (frost$core$Class*) &frost$collections$Collection$class, NULL, { } };

struct { frost$core$Class* cl; ITable* next; void* methods[1]; } frost$collections$Collection$_frost$collections$Iterable = { (frost$core$Class*) &frost$collections$Iterable$class, (ITable*) &frost$collections$Collection$_frost$collections$Collection, { NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$Collection$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$Collection$_frost$collections$Iterable, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

struct { frost$core$Class* cl; ITable* next; void* methods[11]; } frost$collections$Collection$_frost$collections$CollectionView = { (frost$core$Class*) &frost$collections$CollectionView$class, (ITable*) &frost$collections$Collection$_frost$collections$CollectionWriter, { NULL, frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T, frost$collections$CollectionView$join$R$frost$core$String, frost$collections$CollectionView$join$frost$core$String$R$frost$core$String, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T, frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT, frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT} };

static frost$core$String $s1;
frost$collections$Collection$class_type frost$collections$Collection$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$Collection$_frost$collections$CollectionView, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup} };


static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e", 28, 8401683198394368736, NULL };



frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);




