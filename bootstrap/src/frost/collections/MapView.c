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
typedef frost$core$Object* (*$fn5)(frost$core$Tuple2*);
typedef frost$collections$Iterator* (*$fn7)(frost$collections$MapView*);
typedef frost$collections$Iterator* (*$fn8)(frost$collections$Iterator*, frost$core$MutableMethod*);
typedef frost$core$Object* (*$fn10)(frost$core$Tuple2*);

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

frost$collections$MapView* _1;
$fn2 _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
frost$core$Int8* _5;
frost$core$Method* _6;
frost$core$Int8** _9;
frost$core$Object* _12;
frost$core$Immutable** _14;
frost$core$Immutable* _15;
frost$core$Object* _16;
frost$core$Immutable** _18;
frost$core$Method* _21;
frost$core$MutableMethod* _22;
frost$core$MutableMethod* _23;
$fn3 _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:51
_1 = param0;
ITable* $tmp4 = _1->$class->itable;
while ($tmp4->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp4 = $tmp4->next;
}
_2 = $tmp4->methods[3];
_3 = _2(_1);
_4 = _3;
_5 = ((frost$core$Int8*) frost$collections$MapView$$anonymous1$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$K);
_6 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:51:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_9 = &_6->pointer;
*_9 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_12 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_6->target;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_6->target;
*_18 = ((frost$core$Immutable*) NULL);
_21 = _6;
_22 = ((frost$core$MutableMethod*) _21);
_23 = _22;
ITable* $tmp6 = _4->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp6 = $tmp6->next;
}
_24 = $tmp6->methods[11];
_25 = _24(_4, _23);
_26 = _25;
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return _26;

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

frost$collections$MapView* _1;
$fn7 _2;
frost$collections$Iterator* _3;
frost$collections$Iterator* _4;
frost$core$Int8* _5;
frost$core$Method* _6;
frost$core$Int8** _9;
frost$core$Object* _12;
frost$core$Immutable** _14;
frost$core$Immutable* _15;
frost$core$Object* _16;
frost$core$Immutable** _18;
frost$core$Method* _21;
frost$core$MutableMethod* _22;
frost$core$MutableMethod* _23;
$fn8 _24;
frost$collections$Iterator* _25;
frost$collections$Iterator* _26;
frost$core$Object* _27;
frost$core$Object* _29;
frost$core$Object* _31;
frost$core$Object* _33;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/MapView.frost:57
_1 = param0;
ITable* $tmp9 = _1->$class->itable;
while ($tmp9->$class != (frost$core$Class*) &frost$collections$MapView$class) {
    $tmp9 = $tmp9->next;
}
_2 = $tmp9->methods[3];
_3 = _2(_1);
_4 = _3;
_5 = ((frost$core$Int8*) frost$collections$MapView$$anonymous2$$LPfrost$collections$MapView$K$Cfrost$collections$MapView$V$RP$R$frost$collections$MapView$V);
_6 = (frost$core$Method*) frostObjectAlloc(sizeof(frost$core$Method), (frost$core$Class*) &frost$core$Method$class);
// begin inline call to frost.core.Method.init(pointer:frost.unsafe.Pointer<frost.core.Int8>, target:frost.core.Immutable?) from MapView.frost:57:31
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:37
_9 = &_6->pointer;
*_9 = _5;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Method.frost:38
_12 = ((frost$core$Object*) ((frost$core$Immutable*) NULL));
frost$core$Frost$ref$frost$core$Object$Q(_12);
_14 = &_6->target;
_15 = *_14;
_16 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_16);
_18 = &_6->target;
*_18 = ((frost$core$Immutable*) NULL);
_21 = _6;
_22 = ((frost$core$MutableMethod*) _21);
_23 = _22;
ITable* $tmp11 = _4->$class->itable;
while ($tmp11->$class != (frost$core$Class*) &frost$collections$Iterator$class) {
    $tmp11 = $tmp11->next;
}
_24 = $tmp11->methods[11];
_25 = _24(_4, _23);
_26 = _25;
_27 = ((frost$core$Object*) _26);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_29);
_31 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_31);
_33 = ((frost$core$Object*) _3);
frost$core$Frost$unref$frost$core$Object$Q(_33);
return _26;

}






