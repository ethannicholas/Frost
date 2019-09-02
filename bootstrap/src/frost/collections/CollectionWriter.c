#include "frost/collections/CollectionWriter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionView.h"
#include "frost/collections/Iterable.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$CollectionWriter$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, NULL, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

static frost$core$String $s1;
frost$collections$CollectionWriter$class_type frost$collections$CollectionWriter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$CollectionWriter$_frost$collections$CollectionWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$Iterable*);
typedef frost$core$Bit (*$fn3)(frost$collections$Iterator*);
typedef frost$core$Object* (*$fn4)(frost$collections$Iterator*);
typedef void (*$fn5)(frost$collections$CollectionWriter*, frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x57\x72\x69\x74\x65\x72", 34, 4280469431822817607, NULL };

void frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT(frost$collections$CollectionWriter* param0, frost$collections$CollectionView* param1) {

frost$core$Object* local0 = NULL;
frost$collections$Iterable* _1;
frost$collections$Iterable* _2;
$fn2 _3;
frost$collections$Iterator* _4;
frost$collections$Iterator* _5;
frost$collections$Iterator* _7;
$fn3 _8;
frost$core$Bit _9;
bool _10;
frost$collections$Iterator* _13;
$fn4 _14;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _17;
frost$core$Object* _19;
frost$core$Object* _20;
frost$collections$CollectionWriter* _24;
frost$core$Object* _25;
$fn5 _26;
frost$core$Object* _28;
frost$core$Object* _30;
frost$core$Object* _31;
frost$core$Object* _35;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:29
_1 = ((frost$collections$Iterable*) param1);
_2 = _1;
ITable* $tmp6 = _2->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6 = $tmp6->next;
}
_3 = $tmp6->methods[0];
_4 = _3(_2);
_5 = _4;
goto block1;
block1:;
_7 = _5;
ITable* $tmp7 = _7->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_8 = $tmp7->methods[0];
_9 = _8(_7);
_10 = _9.value;
if (_10) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
_13 = _5;
ITable* $tmp8 = _13->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_14 = $tmp8->methods[1];
_15 = _14(_13);
_16 = _15;
_17 = _16;
frost$core$Frost$ref$frost$core$Object$Q(_17);
_19 = *(&local0);
_20 = _19;
frost$core$Frost$unref$frost$core$Object$Q(_20);
*(&local0) = _16;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:30
_24 = param0;
_25 = *(&local0);
ITable* $tmp9 = _24->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp9 = $tmp9->next;
}
_26 = $tmp9->methods[1];
_26(_24, _25);
_28 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = *(&local0);
_31 = _30;
frost$core$Frost$unref$frost$core$Object$Q(_31);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_35 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_35);
return;

}






