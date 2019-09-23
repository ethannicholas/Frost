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

void frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT(void* rawSelf, frost$collections$CollectionView* param1) {
frost$collections$CollectionWriter* param0 = (frost$collections$CollectionWriter*) rawSelf;

frost$core$Object* local0 = NULL;
frost$collections$Iterable* _1;
$fn2 _2;
frost$collections$Iterator* _3;
$fn3 _5;
frost$core$Bit _6;
bool _7;
$fn4 _10;
frost$core$Object* _11;
frost$core$Object* _12;
frost$core$Object* _13;
frost$core$Object* _15;
frost$core$Object* _16;
frost$core$Object* _20;
$fn5 _21;
frost$core$Object* _23;
frost$core$Object* _25;
frost$core$Object* _26;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:29
_1 = ((frost$collections$Iterable*) param1);
ITable* $tmp6 = _1->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterable$class) {
    $tmp6 = $tmp6->next;
}
_2 = $tmp6->methods[0];
_3 = _2(_1);
goto block1;
block1:;
ITable* $tmp7 = _3->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp7 = $tmp7->next;
}
_5 = $tmp7->methods[0];
_6 = _5(_3);
_7 = _6.value;
if (_7) goto block3; else goto block2;
block2:;
*(&local0) = ((frost$core$Object*) NULL);
ITable* $tmp8 = _3->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp8 = $tmp8->next;
}
_10 = $tmp8->methods[1];
_11 = _10(_3);
_12 = _11;
_13 = _12;
frost$core$Frost$ref$frost$core$Object$Q(_13);
_15 = *(&local0);
_16 = _15;
frost$core$Frost$unref$frost$core$Object$Q(_16);
*(&local0) = _12;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/CollectionWriter.frost:30
_20 = *(&local0);
ITable* $tmp9 = param0->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp9 = $tmp9->next;
}
_21 = $tmp9->methods[1];
_21(param0, _20);
_23 = _11;
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = *(&local0);
_26 = _25;
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local0) = ((frost$core$Object*) NULL);
goto block1;
block3:;
_30 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return;

}






