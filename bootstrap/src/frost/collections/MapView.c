#include "frost/collections/MapView.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Tuple2.h"
#include "frost/core/Frost.h"
#include "frost/collections/Iterator.h"
#include "frost/core/Method.h"
#include "frost/core/Immutable.h"
#include "frost/core/MutableMethod.h"


struct { frost$core$Class* cl; ITable* next; void* methods[6]; } frost$collections$MapView$_frost$collections$MapView = { (frost$core$Class*) &frost$collections$MapView$class, NULL, { NULL, NULL, NULL, NULL, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

static frost$core$String $s1;
frost$collections$MapView$class_type frost$collections$MapView$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$MapView$_frost$collections$MapView, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL, NULL, frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT, frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT} };

typedef frost$collections$Iterator* (*$fn2)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn3)(frost$collections$Iterator*, frost$core$MutableMethod*);
typedef frost$collections$Iterator* (*$fn6)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn7)(frost$collections$Iterator*, frost$core$MutableMethod*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4d\x61\x70\x56\x69\x65\x77", 25, 236329803138584107, NULL };

frost$core$Object* frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K(frost$core$Tuple2* param0) {

frost$core$Tuple2* _1;
frost$core$Object** _2;
frost$core$Object* _3;
frost$core$Object* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:51
_1 = param0;
_2 = &_1->f0;
_3 = *_2;
_4 = _3;
_5 = _4;
frost$core$Frost$ref$frost$core$Object$Q(_5);
return _4;

}
frost$collections$Iterator* frost$collections$MapView$get_keys$R$frost$collections$Iterator$LTfrost$collections$MapView$K$GT(void* rawSelf) {
frost$collections$MapView* param0 = (frost$collections$MapView*) rawSelf;

$fn2 _1;
frost$collections$Iterator* _2;
frost$core$Int8* _3;
frost$core$Method* _4;
frost$core$Int8** _7;
frost$core$Object* _10;
frost$core$Immutable** _12;
frost$core$Immutable* _13;
frost$core$Object* _14;
frost$core$Immutable** _16;
frost$core$Method* _19;
frost$core$MutableMethod* _20;
frost$core$MutableMethod* _21;
$fn3 _22;
frost$collections$Iterator* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:51
ITable* $tmp4 = param0->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp4 = $tmp4->next;
}
_1 = $tmp4->methods[3];
_2 = _1(param0);
_3 = ((frost$core$Int8*) frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K);
_4 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:51:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_7 = &_4->pointer;
*_7 = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_10 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &_4->target;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &_4->target;
*_16 = ((frost$core$Immutable*) NULL);
_19 = _4;
_20 = ((frost$core$MutableMethod*) _19);
_21 = _20;
ITable* $tmp5 = _2->$class->itable;
while ($tmp5->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp5 = $tmp5->next;
}
_22 = $tmp5->methods[11];
_23 = _22(_2, _21);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return _23;

}
frost$core$Object* frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V(frost$core$Tuple2* param0) {

frost$core$Tuple2* _1;
frost$core$Object** _2;
frost$core$Object* _3;
frost$core$Object* _4;
frost$core$Object* _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:57
_1 = param0;
_2 = &_1->f1;
_3 = *_2;
_4 = _3;
_5 = _4;
frost$core$Frost$ref$frost$core$Object$Q(_5);
return _4;

}
frost$collections$Iterator* frost$collections$MapView$get_values$R$frost$collections$Iterator$LTfrost$collections$MapView$V$GT(void* rawSelf) {
frost$collections$MapView* param0 = (frost$collections$MapView*) rawSelf;

$fn6 _1;
frost$collections$Iterator* _2;
frost$core$Int8* _3;
frost$core$Method* _4;
frost$core$Int8** _7;
frost$core$Object* _10;
frost$core$Immutable** _12;
frost$core$Immutable* _13;
frost$core$Object* _14;
frost$core$Immutable** _16;
frost$core$Method* _19;
frost$core$MutableMethod* _20;
frost$core$MutableMethod* _21;
$fn7 _22;
frost$collections$Iterator* _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Object* _28;
frost$core$Object* _30;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:57
ITable* $tmp8 = param0->$class->itable;
while ($tmp8->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp8 = $tmp8->next;
}
_1 = $tmp8->methods[3];
_2 = _1(param0);
_3 = ((frost$core$Int8*) frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V);
_4 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_7 = &_4->pointer;
*_7 = _3;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_10 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &_4->target;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &_4->target;
*_16 = ((frost$core$Immutable*) NULL);
_19 = _4;
_20 = ((frost$core$MutableMethod*) _19);
_21 = _20;
ITable* $tmp9 = _2->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp9 = $tmp9->next;
}
_22 = $tmp9->methods[11];
_23 = _22(_2, _21);
_24 = ((frost$core$Object*) _23);
frost$core$Frost$ref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_26);
_28 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_28);
_30 = ((frost$core$Object*) _2);
frost$core$Frost$unref$frost$core$Object$Q(_30);
return _23;

}






