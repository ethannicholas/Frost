#include "frost/core/Matcher.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Bit.h"
#include "frost/core/String/Index.h"
#include "frost/core/Int.h"
#include "frost/core/Comparable.h"
#include "frost/core/Frost.h"
#include "frost/core/MutableString.h"
#include "frost/core/Int64.h"
#include "frost/core/Range.LTfrost/core/String/Index.GT.h"
#include "frost/core/RegularExpression.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"

frost$unsafe$Pointer frost$unsafe$Pointer$init$builtin_int(int64_t p_value);

static frost$core$String $s1;
frost$core$Matcher$class_type frost$core$Matcher$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, frost$core$Matcher$cleanup, frost$core$Matcher$matches$R$frost$core$Bit, frost$core$Matcher$find$R$frost$core$Bit, frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String, frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit, frost$core$Matcher$appendTail$frost$core$MutableString, frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit, frost$core$Matcher$get_start$R$frost$core$String$Index, frost$core$Matcher$get_end$R$frost$core$String$Index, frost$core$Matcher$get_groupCount$R$frost$core$Int, frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q, frost$core$Matcher$destroy} };

typedef frost$core$Bit (*$fn2)(frost$core$Comparable*, frost$core$Comparable*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72", 18, 3280208507556224142, NULL };
static frost$core$String $s3 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s4 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x69\x6e\x64\x28\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74", 72, -7755050533323058468, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x29", 132, 3569372354769601920, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x6d\x65\x74\x68\x6f\x64\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x61\x74\x63\x68\x65\x72\x2e\x61\x70\x70\x65\x6e\x64\x52\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x28\x74\x61\x72\x67\x65\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4d\x75\x74\x61\x62\x6c\x65\x53\x74\x72\x69\x6e\x67\x2c\x20\x72\x65\x70\x6c\x61\x63\x65\x6d\x65\x6e\x74\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x2c\x20\x61\x6c\x6c\x6f\x77\x47\x72\x6f\x75\x70\x52\x65\x66\x65\x72\x65\x6e\x63\x65\x73\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29", 169, -7827482256334505836, NULL };
static frost$core$String $s12 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x5c\x24\x28\x30\x7c\x5b\x31\x2d\x39\x5d\x5c\x64\x2a\x29", 14, 7414632169519064601, NULL };
static frost$core$String $s13 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s14 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s15 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x53\x74\x72\x69\x6e\x67\x2e\x66\x72\x6f\x73\x74", 12, 7542466198510074048, NULL };
static frost$core$String $s16 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34", 71, -537776853434983375, NULL };
static frost$core$String $s17 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74", 67, 6831135569071847533, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x4d\x61\x74\x63\x68\x65\x72\x2e\x66\x72\x6f\x73\x74", 13, -7494374276615964475, NULL };
static frost$core$String $s20 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67", 73, -3541275370151069987, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (intptr_t) "\x24", 1, -5808630540432999757, NULL };

void frost$core$Matcher$init(void* rawSelf) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

return;

}
frost$core$Bit frost$core$Matcher$find$R$frost$core$Bit(void* rawSelf) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$String$Index local0;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$String$Index local4;
frost$core$String$Index local5;
frost$core$String$Index local6;
frost$core$Bit* _0;
frost$core$Bit _1;
bool _2;
frost$core$String$Index* _4;
frost$core$String$Index _5;
frost$core$String** _6;
frost$core$String* _7;
frost$core$Int _10;
frost$core$Int* _13;
frost$core$String$Index _15;
frost$core$String$Index _18;
frost$core$Int _22;
frost$core$Int _23;
int64_t _26;
int64_t _27;
bool _28;
frost$core$Bit _29;
bool _32;
frost$core$Int _34;
frost$core$Bit* _39;
frost$core$Bit _40;
bool _41;
frost$core$String$Index _44;
frost$core$String$Index _47;
frost$core$String$Index _48;
frost$core$Int _51;
frost$core$Int _52;
int64_t _55;
int64_t _56;
bool _57;
frost$core$Bit _58;
bool _61;
frost$core$String** _64;
frost$core$String* _65;
frost$core$String$Index _66;
frost$core$String$Index _67;
frost$core$String$Index _70;
frost$core$Comparable* _71;
frost$core$String** _72;
frost$core$String* _73;
frost$core$Int* _76;
frost$core$Int _77;
frost$core$Int* _80;
frost$core$String$Index _82;
frost$core$String$Index _85;
frost$core$Comparable* _87;
$fn2 _88;
frost$core$Bit _89;
bool _90;
frost$core$Object* _91;
frost$core$Object* _93;
frost$core$Bit _97;
frost$core$Bit* _98;
frost$core$Bit* _101;
frost$core$Bit _102;
frost$core$String** _108;
frost$core$String* _109;
frost$core$Int _112;
frost$core$Int* _115;
frost$core$String$Index _117;
frost$core$String$Index _120;
frost$core$String$Index _125;
frost$core$Bit _126;
frost$core$Bit* _127;
frost$core$Bit* _130;
frost$core$Bit _131;
_0 = &param0->matched;
_1 = *_0;
_2 = _1.value;
if (_2) goto block1; else goto block3;
block3:;
_4 = &param0->replacementIndex;
_5 = *_4;
_6 = &param0->searchText;
_7 = *_6;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:52:49
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_10 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_13 = &(&local1)->value;
*_13 = _10;
_15 = *(&local1);
*(&local0) = _15;
_18 = *(&local0);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Matcher.frost:52:37
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_22 = _5.value;
_23 = _18.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_26 = _22.value;
_27 = _23.value;
_28 = _26 == _27;
_29 = (frost$core$Bit) {_28};
_32 = _29.value;
if (_32) goto block1; else goto block2;
block2:;
_34 = (frost$core$Int) {53u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s3, _34, &$s4);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:54
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:55
_39 = &param0->matched;
_40 = *_39;
_41 = _40.value;
if (_41) goto block8; else goto block10;
block8:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:56
frost$core$Matcher$get_end$R$frost$core$String$Index(&_44, param0);
*(&local2) = _44;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:57
frost$core$Matcher$get_start$R$frost$core$String$Index(&_47, param0);
_48 = *(&local2);
// begin inline call to function frost.core.String.Index.=(other:frost.core.String.Index):frost.core.Bit from Matcher.frost:57:27
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:66
_51 = _47.value;
_52 = _48.value;
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from String.frost:66:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_55 = _51.value;
_56 = _52.value;
_57 = _55 == _56;
_58 = (frost$core$Bit) {_57};
_61 = _58.value;
if (_61) goto block11; else goto block12;
block11:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:58
_64 = &param0->searchText;
_65 = *_64;
_66 = *(&local2);
_67 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index(_65, _66);
*(&local2) = _67;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:59
_70 = *(&local2);
frost$core$String$Index$wrapper* $tmp5;
$tmp5 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp5->value = _70;
_71 = ((frost$core$Comparable*) $tmp5);
_72 = &param0->searchText;
_73 = *_72;
// begin inline call to function frost.core.String.get_end():frost.core.String.Index from Matcher.frost:59:39
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1212
_76 = &_73->_length;
_77 = *_76;
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1212:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_80 = &(&local4)->value;
*_80 = _77;
_82 = *(&local4);
*(&local3) = _82;
_85 = *(&local3);
frost$core$String$Index$wrapper* $tmp6;
$tmp6 = (frost$core$String$Index$wrapper*) frostObjectAlloc(sizeof(frost$core$String$Index$wrapper), (frost$core$Class*) &frost$core$String$Index$wrapperclass);
$tmp6->value = _85;
_87 = ((frost$core$Comparable*) $tmp6);
ITable* $tmp7 = _71->$class->itable;
while ($tmp7->$class != (frost$core$Class*) &frost$core$Comparable$class) {
    $tmp7 = $tmp7->next;
}
_88 = $tmp7->methods[2];
_89 = _88(_71, _87);
_90 = _89.value;
_91 = ((frost$core$Object*) _87);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_93 = ((frost$core$Object*) _71);
frost$core$Frost$unref$frost$core$Object$Q(_93);
if (_90) goto block15; else goto block16;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:60
_97 = (frost$core$Bit) {false};
_98 = &param0->matched;
*_98 = _97;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:61
_101 = &param0->matched;
_102 = *_101;
return _102;
block16:;
goto block12;
block12:;
goto block9;
block10:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:66
_108 = &param0->searchText;
_109 = *_108;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:66:32
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_112 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_115 = &(&local6)->value;
*_115 = _112;
_117 = *(&local6);
*(&local5) = _117;
_120 = *(&local5);
*(&local2) = _120;
goto block9;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:68
_125 = *(&local2);
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&_126, param0, _125);
_127 = &param0->matched;
*_127 = _126;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:69
_130 = &param0->matched;
_131 = *_130;
return _131;

}
frost$core$Bit frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit(void* rawSelf, frost$core$String$Index param1) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$String$Index* _1;
frost$core$Bit _4;
frost$core$Bit* _5;
frost$core$Bit* _8;
frost$core$Bit _9;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:84
_1 = &param0->replacementIndex;
*_1 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:85
frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(&_4, param0, param1);
_5 = &param0->matched;
*_5 = _4;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:86
_8 = &param0->matched;
_9 = *_8;
return _9;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String(void* rawSelf, frost$core$MutableString* param1, frost$core$String* param2) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$Bit* _0;
frost$core$Bit _1;
bool _2;
frost$core$Int _4;
frost$core$Bit _8;
_0 = &param0->matched;
_1 = *_0;
_2 = _1.value;
if (_2) goto block1; else goto block2;
block2:;
_4 = (frost$core$Int) {114u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _4, &$s9);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:115
_8 = (frost$core$Bit) {true};
frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(param0, param1, param2, _8);
return;

}
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(void* rawSelf, frost$core$MutableString* param1, frost$core$String* param2, frost$core$Bit param3) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$Matcher* local0 = NULL;
frost$core$String$Index local1;
frost$core$String$Index local2;
frost$core$String$Index local3;
frost$core$Int$nullable local4;
frost$core$Int64$nullable local5;
frost$core$Int local6;
frost$core$Int local7;
frost$core$String$Index local8;
frost$core$Bit* _0;
frost$core$Bit _1;
bool _2;
frost$core$Int _4;
frost$core$String** _8;
frost$core$String* _9;
frost$core$String$Index* _10;
frost$core$String$Index _11;
frost$core$String$Index _12;
frost$core$Bit _13;
frost$core$Range$LTfrost$core$String$Index$GT _14;
frost$core$String* _15;
frost$core$Object* _17;
bool _20;
frost$core$RegularExpression* _23;
frost$core$Matcher* _25;
frost$core$Object* _27;
frost$core$Matcher* _29;
frost$core$Object* _30;
frost$core$Object* _33;
frost$core$Object* _35;
frost$core$String** _38;
frost$core$String* _39;
frost$core$Int _42;
frost$core$Int* _45;
frost$core$String$Index _47;
frost$core$String$Index _50;
frost$core$Matcher* _55;
frost$core$Bit _56;
bool _57;
frost$core$Matcher* _60;
frost$core$Int _61;
frost$core$String* _62;
bool _63;
frost$core$Bit _64;
bool _65;
frost$core$Int _67;
frost$core$String* _70;
frost$core$Int64$nullable _73;
frost$core$Int64$nullable _76;
bool _77;
frost$core$Bit _78;
bool _79;
frost$core$Int64$nullable _82;
bool _83;
frost$core$Bit _84;
bool _85;
frost$core$Int _87;
frost$core$Int64 _90;
int64_t _93;
int64_t _94;
frost$core$Int _95;
frost$core$Int$nullable _97;
frost$core$Int$nullable _103;
bool _104;
frost$core$Bit _105;
bool _106;
frost$core$Int _108;
frost$core$Int _111;
frost$core$Object* _113;
frost$core$Int _116;
frost$core$Matcher* _119;
frost$core$String$Index _120;
frost$core$Int _124;
frost$core$Int _125;
int64_t _126;
int64_t _127;
bool _128;
frost$core$Bit _129;
bool _130;
frost$core$Int _133;
frost$core$Int _134;
int64_t _135;
int64_t _136;
int64_t _137;
frost$core$Int _138;
frost$core$String** _141;
frost$core$String* _142;
frost$core$String$Index _143;
frost$core$String$Index _144;
frost$core$String$Index _148;
frost$core$Matcher* _149;
frost$core$String$Index _150;
frost$core$Bit _151;
frost$core$Range$LTfrost$core$String$Index$GT _152;
frost$core$String* _153;
frost$core$Object* _155;
frost$core$String$Index _158;
frost$core$Int _161;
frost$core$Int _162;
int64_t _163;
int64_t _164;
bool _165;
frost$core$Bit _166;
bool _167;
frost$core$Int _169;
frost$core$Int _170;
int64_t _173;
int64_t _174;
bool _175;
frost$core$Bit _176;
bool _178;
frost$core$Int _181;
frost$core$String* _182;
bool _183;
frost$core$Bit _184;
bool _185;
frost$core$Int _187;
frost$core$String* _190;
frost$core$Object* _192;
frost$core$String$Index _201;
frost$core$String$Index$nullable _202;
frost$core$Bit _203;
frost$core$Range$LTfrost$core$String$Index$Q$GT _204;
frost$core$String* _205;
frost$core$Object* _207;
frost$core$Matcher* _209;
frost$core$Object* _210;
frost$core$String$Index _219;
frost$core$String$Index* _220;
_0 = &param0->matched;
_1 = *_0;
_2 = _1.value;
if (_2) goto block1; else goto block2;
block2:;
_4 = (frost$core$Int) {131u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _4, &$s11);
abort(); // unreachable
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:132
_8 = &param0->searchText;
_9 = *_8;
_10 = &param0->replacementIndex;
_11 = *_10;
frost$core$Matcher$get_start$R$frost$core$String$Index(&_12, param0);
_13 = (frost$core$Bit) {false};
_14 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_11, _12, _13);
_15 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(_9, _14);
frost$core$MutableString$append$frost$core$String(param1, _15);
_17 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_17);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:133
_20 = param3.value;
if (_20) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:134
_23 = (frost$core$RegularExpression*) frostObjectAlloc(sizeof(frost$core$RegularExpression), (frost$core$Class*) &frost$core$RegularExpression$class);
frost$core$RegularExpression$init$frost$core$String(_23, &$s12);
_25 = frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(_23, param2);
*(&local0) = ((frost$core$Matcher*) NULL);
_27 = ((frost$core$Object*) _25);
frost$core$Frost$ref$frost$core$Object$Q(_27);
_29 = *(&local0);
_30 = ((frost$core$Object*) _29);
frost$core$Frost$unref$frost$core$Object$Q(_30);
*(&local0) = _25;
_33 = ((frost$core$Object*) _25);
frost$core$Frost$unref$frost$core$Object$Q(_33);
_35 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_35);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:135
_38 = &param0->searchText;
_39 = *_38;
// begin inline call to function frost.core.String.get_start():frost.core.String.Index from Matcher.frost:135:51
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1205
_42 = (frost$core$Int) {0u};
// begin inline call to frost.core.String.Index.init(value:frost.core.Int):frost.core.String.Index from String.frost:1205:21
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:61
_45 = &(&local2)->value;
*_45 = _42;
_47 = *(&local2);
*(&local1) = _47;
_50 = *(&local1);
*(&local3) = _50;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:136
goto block8;
block8:;
_55 = *(&local0);
_56 = frost$core$Matcher$find$R$frost$core$Bit(_55);
_57 = _56.value;
if (_57) goto block9; else goto block10;
block9:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:137
_60 = *(&local0);
_61 = (frost$core$Int) {1u};
_62 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(_60, _61);
_63 = _62 != NULL;
_64 = (frost$core$Bit) {_63};
_65 = _64.value;
if (_65) goto block11; else goto block12;
block12:;
_67 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s13, _67, &$s14);
abort(); // unreachable
block11:;
_70 = _62;
// begin inline call to function frost.core.String.get_asInt():frost.core.Int? from Matcher.frost:137:45
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1454
_73 = frost$core$String$get_asInt64$R$frost$core$Int64$Q(_70);
*(&local5) = _73;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1455
_76 = *(&local5);
_77 = _76.nonnull;
_78 = (frost$core$Bit) {_77};
_79 = _78.value;
if (_79) goto block14; else goto block15;
block14:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1456
_82 = *(&local5);
_83 = _82.nonnull;
_84 = (frost$core$Bit) {_83};
_85 = _84.value;
if (_85) goto block16; else goto block17;
block17:;
_87 = (frost$core$Int) {1456u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s15, _87, &$s16);
abort(); // unreachable
block16:;
_90 = ((frost$core$Int64) _82.value);
// begin inline call to function frost.core.Int64.get_asInt():frost.core.Int from String.frost:1456:26
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int64.frost:580
_93 = _90.value;
_94 = ((int64_t) _93);
_95 = (frost$core$Int) {_94};
_97 = ((frost$core$Int$nullable) { _95, true });
*(&local4) = _97;
goto block13;
block15:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:1458
*(&local4) = ((frost$core$Int$nullable) { .nonnull = false });
goto block13;
block13:;
_103 = *(&local4);
_104 = _103.nonnull;
_105 = (frost$core$Bit) {_104};
_106 = _105.value;
if (_106) goto block19; else goto block20;
block20:;
_108 = (frost$core$Int) {137u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s17, _108, &$s18);
abort(); // unreachable
block19:;
_111 = ((frost$core$Int) _103.value);
*(&local6) = _111;
_113 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_113);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:138
_116 = *(&local6);
*(&local7) = _116;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:139
_119 = *(&local0);
frost$core$Matcher$get_end$R$frost$core$String$Index(&_120, _119);
*(&local8) = _120;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:140
goto block21;
block21:;
_124 = *(&local7);
frost$core$Matcher$get_groupCount$R$frost$core$Int(&_125, param0);
_126 = _124.value;
_127 = _125.value;
_128 = _126 >= _127;
_129 = (frost$core$Bit) {_128};
_130 = _129.value;
if (_130) goto block22; else goto block23;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:141
_133 = *(&local7);
_134 = (frost$core$Int) {10u};
_135 = _133.value;
_136 = _134.value;
_137 = _135 / _136;
_138 = (frost$core$Int) {_137};
*(&local7) = _138;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:142
_141 = &param0->searchText;
_142 = *_141;
_143 = *(&local8);
_144 = frost$core$String$previous$frost$core$String$Index$R$frost$core$String$Index(_142, _143);
*(&local8) = _144;
goto block21;
block23:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:144
_148 = *(&local3);
_149 = *(&local0);
frost$core$Matcher$get_start$R$frost$core$String$Index(&_150, _149);
_151 = (frost$core$Bit) {false};
_152 = frost$core$Range$LTfrost$core$String$Index$GT$init$frost$core$String$Index$frost$core$String$Index$frost$core$Bit(_148, _150, _151);
_153 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$GT$R$frost$core$String(param2, _152);
frost$core$MutableString$append$frost$core$String(param1, _153);
_155 = ((frost$core$Object*) _153);
frost$core$Frost$unref$frost$core$Object$Q(_155);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:145
_158 = *(&local8);
*(&local3) = _158;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:146
_161 = *(&local7);
_162 = (frost$core$Int) {0u};
_163 = _161.value;
_164 = _162.value;
_165 = _163 > _164;
_166 = (frost$core$Bit) {_165};
_167 = _166.value;
if (_167) goto block24; else goto block27;
block27:;
_169 = *(&local6);
_170 = (frost$core$Int) {0u};
// begin inline call to function frost.core.Int.=(other:frost.core.Int):frost.core.Bit from Matcher.frost:146:44
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Int.frost:426
_173 = _169.value;
_174 = _170.value;
_175 = _173 == _174;
_176 = (frost$core$Bit) {_175};
_178 = _176.value;
if (_178) goto block24; else goto block26;
block24:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:147
_181 = *(&local7);
_182 = frost$core$Matcher$group$frost$core$Int$R$frost$core$String$Q(param0, _181);
_183 = _182 != NULL;
_184 = (frost$core$Bit) {_183};
_185 = _184.value;
if (_185) goto block29; else goto block30;
block30:;
_187 = (frost$core$Int) {147u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s19, _187, &$s20);
abort(); // unreachable
block29:;
_190 = _182;
frost$core$MutableString$append$frost$core$String(param1, _190);
_192 = ((frost$core$Object*) _182);
frost$core$Frost$unref$frost$core$Object$Q(_192);
goto block25;
block26:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:150
frost$core$MutableString$append$frost$core$String(param1, &$s21);
goto block25;
block25:;
goto block8;
block10:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:153
_201 = *(&local3);
_202 = ((frost$core$String$Index$nullable) { _201, true });
_203 = (frost$core$Bit) {false};
_204 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_202, ((frost$core$String$Index$nullable) { .nonnull = false }), _203);
_205 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(param2, _204);
frost$core$MutableString$append$frost$core$String(param1, _205);
_207 = ((frost$core$Object*) _205);
frost$core$Frost$unref$frost$core$Object$Q(_207);
_209 = *(&local0);
_210 = ((frost$core$Object*) _209);
frost$core$Frost$unref$frost$core$Object$Q(_210);
*(&local0) = ((frost$core$Matcher*) NULL);
goto block4;
block5:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:156
frost$core$MutableString$append$frost$core$String(param1, param2);
goto block4;
block4:;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:158
frost$core$Matcher$get_end$R$frost$core$String$Index(&_219, param0);
_220 = &param0->replacementIndex;
*_220 = _219;
return;

}
void frost$core$Matcher$appendTail$frost$core$MutableString(void* rawSelf, frost$core$MutableString* param1) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$String** _1;
frost$core$String* _2;
frost$core$String$Index* _3;
frost$core$String$Index _4;
frost$core$String$Index$nullable _5;
frost$core$Bit _6;
frost$core$Range$LTfrost$core$String$Index$Q$GT _7;
frost$core$String* _8;
frost$core$Object* _10;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:169
_1 = &param0->searchText;
_2 = *_1;
_3 = &param0->replacementIndex;
_4 = *_3;
_5 = ((frost$core$String$Index$nullable) { _4, true });
_6 = (frost$core$Bit) {false};
_7 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(_5, ((frost$core$String$Index$nullable) { .nonnull = false }), _6);
_8 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String(_2, _7);
frost$core$MutableString$append$frost$core$String(param1, _8);
_10 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_10);
return;

}
void frost$core$Matcher$cleanup(void* rawSelf) {
frost$core$Matcher* param0 = (frost$core$Matcher*) rawSelf;

frost$core$Object* _3;
frost$core$String** _5;
frost$core$String* _6;
frost$core$Object* _7;
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:190
frost$core$Matcher$destroy(param0);
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/Matcher.frost:189
_3 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_3);
_5 = &param0->searchText;
_6 = *_5;
_7 = ((frost$core$Object*) _6);
frost$core$Frost$unref$frost$core$Object$Q(_7);
return;

}

