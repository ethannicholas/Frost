#include "frost/collections/ListWriter.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/collections/CollectionWriter.h"
#include "frost/core/Int.h"
#include "frost/core/Bit.h"
#include "frost/core/Frost.h"


struct { frost$core$Class* cl; ITable* next; void* methods[4]; } frost$collections$ListWriter$_frost$collections$ListWriter = { (frost$core$Class*) &frost$collections$ListWriter$class, NULL, { NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

struct { frost$core$Class* cl; ITable* next; void* methods[5]; } frost$collections$ListWriter$_frost$collections$CollectionWriter = { (frost$core$Class*) &frost$collections$CollectionWriter$class, (ITable*) &frost$collections$ListWriter$_frost$collections$ListWriter, { NULL, NULL, frost$collections$CollectionWriter$addAll$frost$collections$CollectionView$LTfrost$collections$CollectionWriter$T$GT, NULL, NULL} };

static frost$core$String $s1;
frost$collections$ListWriter$class_type frost$collections$ListWriter$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &frost$collections$ListWriter$_frost$collections$CollectionWriter, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Object$cleanup, NULL, NULL, NULL, frost$collections$ListWriter$removeLast} };

typedef frost$core$Int (*$fn4)(frost$collections$CollectionWriter*);
typedef frost$core$Int (*$fn17)(frost$collections$CollectionWriter*);
typedef frost$core$Object* (*$fn26)(frost$collections$ListWriter*, frost$core$Int);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72", 28, 794765962303639091, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72\x2e\x66\x72\x6f\x73\x74", 16, 3453561446996316058, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x57\x72\x69\x74\x65\x72\x2e\x72\x65\x6d\x6f\x76\x65\x4c\x61\x73\x74\x28\x29", 73, -1113832679694248644, NULL };

void frost$collections$ListWriter$removeLast(frost$collections$ListWriter* param0) {

ITable* $tmp2 = ((frost$collections$CollectionWriter*) param0)->$class->itable;
while ($tmp2->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp2 = $tmp2->next;
}
$fn4 $tmp3 = $tmp2->methods[0];
frost$core$Int $tmp5 = $tmp3(((frost$collections$CollectionWriter*) param0));
frost$core$Int $tmp6 = (frost$core$Int) {0u};
int64_t $tmp7 = $tmp5.value;
int64_t $tmp8 = $tmp6.value;
bool $tmp9 = $tmp7 > $tmp8;
frost$core$Bit $tmp10 = (frost$core$Bit) {$tmp9};
bool $tmp11 = $tmp10.value;
if ($tmp11) goto block1; else goto block2;
block2:;
frost$core$Int $tmp12 = (frost$core$Int) {42u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, $tmp12, &$s14);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/collections/ListWriter.frost:43
ITable* $tmp15 = ((frost$collections$CollectionWriter*) param0)->$class->itable;
while ($tmp15->$class != (frost$core$Class*) &frost$collections$CollectionWriter$class) {
    $tmp15 = $tmp15->next;
}
$fn17 $tmp16 = $tmp15->methods[0];
frost$core$Int $tmp18 = $tmp16(((frost$collections$CollectionWriter*) param0));
frost$core$Int $tmp19 = (frost$core$Int) {1u};
int64_t $tmp20 = $tmp18.value;
int64_t $tmp21 = $tmp19.value;
int64_t $tmp22 = $tmp20 - $tmp21;
frost$core$Int $tmp23 = (frost$core$Int) {$tmp22};
ITable* $tmp24 = param0->$class->itable;
while ($tmp24->$class != (frost$core$Class*) &frost$collections$ListWriter$class) {
    $tmp24 = $tmp24->next;
}
$fn26 $tmp25 = $tmp24->methods[2];
frost$core$Object* $tmp27 = $tmp25(param0, $tmp23);
frost$core$Frost$unref$frost$core$Object$Q($tmp27);
return;

}






