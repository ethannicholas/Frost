#include "org/frostlang/frostc/statement/Assert.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "org/frostlang/frostc/Compiler.h"
#include "org/frostlang/frostc/Position.h"
#include "org/frostlang/frostc/ASTNode.h"
#include "org/frostlang/frostc/Compiler/AutoUnrefs.h"
#include "frost/collections/Array.h"
#include "frost/core/String/Index.h"
#include "org/frostlang/frostc/ClassDecl.h"
#include "org/frostlang/frostc/MethodDecl.h"
#include "frost/core/Frost.h"
#include "frost/core/Int64.h"
#include "frost/collections/Stack.h"
#include "frost/core/Bit.h"
#include "frost/collections/CollectionView.h"
#include "frost/io/File.h"
#include "frost/core/Range.LTfrost/core/String/Index.Q.GT.h"
#include "frost/core/UInt64.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/SymbolTable.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Methods.h"
#include "org/frostlang/frostc/FixedArray.h"
#include "org/frostlang/frostc/MethodRef.h"
#include "frost/collections/ListView.h"
#include "org/frostlang/frostc/Compiler/TypeContext.h"
#include "org/frostlang/frostc/expression/Call.h"
#include "org/frostlang/frostc/IR/Value.h"
#include "org/frostlang/frostc/IR.h"
#include "org/frostlang/frostc/IR/Statement.h"
#include "org/frostlang/frostc/IR/Statement/ID.h"
#include "org/frostlang/frostc/IR/Block/ID.h"


static frost$core$String $s1;
org$frostlang$frostc$statement$Assert$class_type org$frostlang$frostc$statement$Assert$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, NULL, { frost$core$Object$get_asString$R$frost$core$String, org$frostlang$frostc$statement$Assert$cleanup} };

typedef frost$core$Int64 (*$fn22)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn36)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn51)(frost$collections$CollectionView*);
typedef frost$core$Int64 (*$fn70)(frost$collections$CollectionView*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn166)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn185)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Block$ID (*$fn190)(org$frostlang$frostc$IR*, frost$core$String*);
typedef org$frostlang$frostc$IR$Statement$ID (*$fn201)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Statement*);
typedef void (*$fn206)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);
typedef void (*$fn210)(org$frostlang$frostc$IR*, org$frostlang$frostc$IR$Block$ID);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x73\x74\x61\x74\x65\x6d\x65\x6e\x74\x2e\x41\x73\x73\x65\x72\x74", 37, -3457141472014761945, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s31 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x5b\x5d\x28\x64\x65\x70\x74\x68\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x53\x74\x61\x63\x6b\x2e\x54", 110, -6780593757603597528, NULL };
static frost$core$String $s44 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x53\x74\x61\x63\x6b\x2e\x73\x74\x75\x62", 10, -1937609415336213925, NULL };
static frost$core$String $s78 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x72\x72\x61\x79\x2e\x73\x74\x75\x62", 10, -775704626125802412, NULL };
static frost$core$String $s79 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x70\x72\x65\x63\x6f\x6e\x64\x69\x74\x69\x6f\x6e\x20\x66\x61\x69\x6c\x75\x72\x65\x20\x66\x6f\x72\x20\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x5b\x5d\x28\x69\x6e\x64\x65\x78\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x29\x3a\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x2e\x54", 110, 4208646717458716543, NULL };
static frost$core$String $s90 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2f", 1, -5808620644828345858, NULL };
static frost$core$String $s121 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s131 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x69\x6f\x6e\x46\x61\x69\x6c\x75\x72\x65", 16, -1047342833001589897, NULL };
static frost$core$String $s187 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x73\x75\x63\x63\x65\x73\x73", 14, 4705032740964695492, NULL };
static frost$core$String $s192 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20\x66\x61\x69\x6c\x75\x72\x65", 14, -6436788288102718507, NULL };

void org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2) {

org$frostlang$frostc$Compiler$AutoUnrefs* local0 = NULL;
frost$collections$Array* local1 = NULL;
frost$core$String* local2 = NULL;
frost$core$String$Index$nullable local3;
org$frostlang$frostc$ClassDecl* local4 = NULL;
org$frostlang$frostc$MethodDecl* local5 = NULL;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:20
FROST_ASSERT(32 == sizeof(org$frostlang$frostc$Compiler$AutoUnrefs));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp2 = (org$frostlang$frostc$Compiler$AutoUnrefs*) frostObjectAlloc(32, (frost$core$Class*) &org$frostlang$frostc$Compiler$AutoUnrefs$class);
org$frostlang$frostc$Compiler$AutoUnrefs$init$org$frostlang$frostc$Compiler($tmp2, param0);
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp3 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp3));
*(&local0) = $tmp2;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp2));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:21
FROST_ASSERT(40 == sizeof(frost$collections$Array));
frost$collections$Array* $tmp4 = (frost$collections$Array*) frostObjectAlloc(40, (frost$core$Class*) &frost$collections$Array$class);
frost$collections$Array$init($tmp4);
*(&local1) = ((frost$collections$Array*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
frost$collections$Array* $tmp5 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp5));
*(&local1) = $tmp4;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp4));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:22
frost$collections$Array* $tmp6 = *(&local1);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp7 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp8 = (frost$core$Int64) {40u};
frost$collections$Stack** $tmp9 = &param0->currentClass;
frost$collections$Stack* $tmp10 = *$tmp9;
frost$core$Int64 $tmp11 = (frost$core$Int64) {0u};
// begin inline call to function frost.collections.Stack.[](depth:frost.core.Int64):frost.collections.Stack.T from Assert.frost:22:68
frost$core$Int64 $tmp12 = (frost$core$Int64) {0u};
int64_t $tmp13 = $tmp11.value;
int64_t $tmp14 = $tmp12.value;
bool $tmp15 = $tmp13 >= $tmp14;
frost$core$Bit $tmp16 = (frost$core$Bit) {$tmp15};
bool $tmp17 = $tmp16.value;
if ($tmp17) goto block4; else goto block3;
block4:;
// begin inline call to function frost.collections.Stack.get_count():frost.core.Int64 from Stack.stub:29:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:44
frost$collections$Array** $tmp18 = &$tmp10->contents;
frost$collections$Array* $tmp19 = *$tmp18;
ITable* $tmp20 = ((frost$collections$CollectionView*) $tmp19)->$class->itable;
while ($tmp20->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp20 = $tmp20->next;
}
$fn22 $tmp21 = $tmp20->methods[0];
frost$core$Int64 $tmp23 = $tmp21(((frost$collections$CollectionView*) $tmp19));
int64_t $tmp24 = $tmp11.value;
int64_t $tmp25 = $tmp23.value;
bool $tmp26 = $tmp24 < $tmp25;
frost$core$Bit $tmp27 = (frost$core$Bit) {$tmp26};
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block2; else goto block3;
block3:;
frost$core$Int64 $tmp29 = (frost$core$Int64) {30u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s30, $tmp29, &$s31);
abort(); // unreachable
block2:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:31
frost$collections$Array** $tmp32 = &$tmp10->contents;
frost$collections$Array* $tmp33 = *$tmp32;
ITable* $tmp34 = ((frost$collections$CollectionView*) $tmp33)->$class->itable;
while ($tmp34->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp34 = $tmp34->next;
}
$fn36 $tmp35 = $tmp34->methods[0];
frost$core$Int64 $tmp37 = $tmp35(((frost$collections$CollectionView*) $tmp33));
int64_t $tmp38 = $tmp37.value;
int64_t $tmp39 = $tmp11.value;
bool $tmp40 = $tmp38 > $tmp39;
frost$core$Bit $tmp41 = (frost$core$Bit) {$tmp40};
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block6; else goto block7;
block7:;
frost$core$Int64 $tmp43 = (frost$core$Int64) {31u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(&$s44, $tmp43);
abort(); // unreachable
block6:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Stack.stub:32
frost$collections$Array** $tmp45 = &$tmp10->contents;
frost$collections$Array* $tmp46 = *$tmp45;
frost$collections$Array** $tmp47 = &$tmp10->contents;
frost$collections$Array* $tmp48 = *$tmp47;
ITable* $tmp49 = ((frost$collections$CollectionView*) $tmp48)->$class->itable;
while ($tmp49->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp49 = $tmp49->next;
}
$fn51 $tmp50 = $tmp49->methods[0];
frost$core$Int64 $tmp52 = $tmp50(((frost$collections$CollectionView*) $tmp48));
frost$core$Int64 $tmp53 = (frost$core$Int64) {1u};
int64_t $tmp54 = $tmp52.value;
int64_t $tmp55 = $tmp53.value;
int64_t $tmp56 = $tmp54 - $tmp55;
frost$core$Int64 $tmp57 = (frost$core$Int64) {$tmp56};
int64_t $tmp58 = $tmp57.value;
int64_t $tmp59 = $tmp11.value;
int64_t $tmp60 = $tmp58 - $tmp59;
frost$core$Int64 $tmp61 = (frost$core$Int64) {$tmp60};
// begin inline call to function frost.collections.Array.[](index:frost.core.Int64):frost.collections.Array.T from Stack.stub:32:16
frost$core$Int64 $tmp62 = (frost$core$Int64) {0u};
int64_t $tmp63 = $tmp61.value;
int64_t $tmp64 = $tmp62.value;
bool $tmp65 = $tmp63 >= $tmp64;
frost$core$Bit $tmp66 = (frost$core$Bit) {$tmp65};
bool $tmp67 = $tmp66.value;
if ($tmp67) goto block11; else goto block10;
block11:;
ITable* $tmp68 = ((frost$collections$CollectionView*) $tmp46)->$class->itable;
while ($tmp68->$class != (frost$core$Class*) &frost$collections$CollectionView$class) {
    $tmp68 = $tmp68->next;
}
$fn70 $tmp69 = $tmp68->methods[0];
frost$core$Int64 $tmp71 = $tmp69(((frost$collections$CollectionView*) $tmp46));
int64_t $tmp72 = $tmp61.value;
int64_t $tmp73 = $tmp71.value;
bool $tmp74 = $tmp72 < $tmp73;
frost$core$Bit $tmp75 = (frost$core$Bit) {$tmp74};
bool $tmp76 = $tmp75.value;
if ($tmp76) goto block9; else goto block10;
block10:;
frost$core$Int64 $tmp77 = (frost$core$Int64) {22u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(&$s78, $tmp77, &$s79);
abort(); // unreachable
block9:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/collections/Array.stub:23
frost$core$Object*** $tmp80 = &$tmp46->data;
frost$core$Object** $tmp81 = *$tmp80;
int64_t $tmp82 = $tmp61.value;
frost$core$Object* $tmp83 = $tmp81[$tmp82];
frost$core$Frost$ref$frost$core$Object$Q($tmp83);
frost$core$Frost$ref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$io$File** $tmp84 = &((org$frostlang$frostc$ClassDecl*) $tmp83)->source;
frost$io$File* $tmp85 = *$tmp84;
// begin inline call to function frost.io.File.get_name():frost.core.String from Assert.frost:22:78
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:35
frost$core$String** $tmp86 = &$tmp85->path;
frost$core$String* $tmp87 = *$tmp86;
// begin inline call to function frost.core.String.lastIndexOf(s:frost.core.String):frost.core.String.Index? from File.stub:35:31
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/String.stub:229
frost$core$String$Index $tmp88 = frost$core$String$get_end$R$frost$core$String$Index($tmp87);
frost$core$String$Index$nullable $tmp89 = frost$core$String$lastIndexOf$frost$core$String$frost$core$String$Index$R$frost$core$String$Index$Q($tmp87, &$s90, $tmp88);
*(&local3) = $tmp89;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:36
frost$core$String$Index$nullable $tmp91 = *(&local3);
frost$core$Bit $tmp92 = (frost$core$Bit) {$tmp91.nonnull};
bool $tmp93 = $tmp92.value;
if ($tmp93) goto block14; else goto block16;
block14:;
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:37
frost$core$String** $tmp94 = &$tmp85->path;
frost$core$String* $tmp95 = *$tmp94;
frost$core$String** $tmp96 = &$tmp85->path;
frost$core$String* $tmp97 = *$tmp96;
frost$core$String$Index$nullable $tmp98 = *(&local3);
frost$core$String$Index $tmp99 = frost$core$String$next$frost$core$String$Index$R$frost$core$String$Index($tmp97, ((frost$core$String$Index) $tmp98.value));
frost$core$Bit $tmp100 = (frost$core$Bit) {false};
frost$core$Range$LTfrost$core$String$Index$Q$GT $tmp101 = frost$core$Range$LTfrost$core$String$Index$Q$GT$init$frost$core$String$Index$Q$frost$core$String$Index$Q$frost$core$Bit(((frost$core$String$Index$nullable) { $tmp99, true }), ((frost$core$String$Index$nullable) { .nonnull = false }), $tmp100);
frost$core$String* $tmp102 = frost$core$String$$IDX$frost$core$Range$LTfrost$core$String$Index$Q$GT$R$frost$core$String($tmp95, $tmp101);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
*(&local2) = $tmp102;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp102));
goto block12;
block16:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/io/File.stub:40
frost$core$String** $tmp103 = &$tmp85->path;
frost$core$String* $tmp104 = *$tmp103;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
*(&local2) = $tmp104;
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp104));
goto block12;
block15:;
goto block12;
block12:;
frost$core$String* $tmp105 = *(&local2);
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$String($tmp7, $tmp8, param1, $tmp105);
frost$collections$Array$add$frost$collections$Array$T($tmp6, ((frost$core$Object*) $tmp7));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp105));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:23
frost$collections$Array* $tmp106 = *(&local1);
FROST_ASSERT(112 == sizeof(org$frostlang$frostc$ASTNode));
org$frostlang$frostc$ASTNode* $tmp107 = (org$frostlang$frostc$ASTNode*) frostObjectAlloc(112, (frost$core$Class*) &org$frostlang$frostc$ASTNode$class);
frost$core$Int64 $tmp108 = (frost$core$Int64) {25u};
frost$core$Int64 $tmp109 = param1.line;
// begin inline call to function frost.core.Int64.get_asUInt64():frost.core.UInt64 from Assert.frost:23:57
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Int64.stub:422
int64_t $tmp110 = $tmp109.value;
frost$core$UInt64 $tmp111 = (frost$core$UInt64) {((uint64_t) $tmp110)};
org$frostlang$frostc$ASTNode$init$frost$core$Int64$org$frostlang$frostc$Position$frost$core$UInt64($tmp107, $tmp108, param1, $tmp111);
frost$collections$Array$add$frost$collections$Array$T($tmp106, ((frost$core$Object*) $tmp107));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp107));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:24
org$frostlang$frostc$Type** $tmp112 = &param0->FROST_TYPE;
org$frostlang$frostc$Type* $tmp113 = *$tmp112;
org$frostlang$frostc$ClassDecl* $tmp114 = org$frostlang$frostc$Compiler$getClass$org$frostlang$frostc$Type$R$org$frostlang$frostc$ClassDecl$Q(param0, $tmp113);
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
org$frostlang$frostc$ClassDecl* $tmp115 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp115));
*(&local4) = $tmp114;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp114));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:25
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:26
frost$core$Bit $tmp116 = (frost$core$Bit) {param2 != NULL};
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block18; else goto block20;
block18:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:27
org$frostlang$frostc$ClassDecl* $tmp118 = *(&local4);
org$frostlang$frostc$SymbolTable* $tmp119 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp118);
org$frostlang$frostc$Symbol* $tmp120 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp119, &$s121);
org$frostlang$frostc$FixedArray** $tmp122 = &((org$frostlang$frostc$Methods*) $tmp120)->methods;
org$frostlang$frostc$FixedArray* $tmp123 = *$tmp122;
frost$core$Int64 $tmp124 = (frost$core$Int64) {0u};
frost$core$Object* $tmp125 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp123, $tmp124);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp125)));
org$frostlang$frostc$MethodDecl* $tmp126 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp126));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp125);
frost$core$Frost$unref$frost$core$Object$Q($tmp125);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp120));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp119));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:28
frost$collections$Array* $tmp127 = *(&local1);
frost$collections$Array$add$frost$collections$Array$T($tmp127, ((frost$core$Object*) param2));
goto block19;
block20:;
// <no location>
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:31
org$frostlang$frostc$ClassDecl* $tmp128 = *(&local4);
org$frostlang$frostc$SymbolTable* $tmp129 = org$frostlang$frostc$Compiler$getSymbolTable$org$frostlang$frostc$ClassDecl$R$org$frostlang$frostc$SymbolTable(param0, $tmp128);
org$frostlang$frostc$Symbol* $tmp130 = org$frostlang$frostc$SymbolTable$$IDX$frost$core$String$R$org$frostlang$frostc$Symbol$Q($tmp129, &$s131);
org$frostlang$frostc$FixedArray** $tmp132 = &((org$frostlang$frostc$Methods*) $tmp130)->methods;
org$frostlang$frostc$FixedArray* $tmp133 = *$tmp132;
frost$core$Int64 $tmp134 = (frost$core$Int64) {1u};
frost$core$Object* $tmp135 = org$frostlang$frostc$FixedArray$$IDX$frost$core$Int64$R$org$frostlang$frostc$FixedArray$T($tmp133, $tmp134);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) ((org$frostlang$frostc$MethodDecl*) $tmp135)));
org$frostlang$frostc$MethodDecl* $tmp136 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp136));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) $tmp135);
frost$core$Frost$unref$frost$core$Object$Q($tmp135);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp130));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp129));
goto block19;
block19:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:33
org$frostlang$frostc$MethodDecl* $tmp137 = *(&local5);
frost$core$Bit $tmp138 = org$frostlang$frostc$Compiler$resolve$org$frostlang$frostc$MethodDecl$R$frost$core$Bit(param0, $tmp137);
// begin inline call to function frost.core.Bit.!():frost.core.Bit from Assert.frost:33:16
// /Users/ethannicholas/Dropbox/Frost/build/stubs/frost/core/Bit.stub:37
bool $tmp139 = $tmp138.value;
bool $tmp140 = !$tmp139;
frost$core$Bit $tmp141 = (frost$core$Bit) {$tmp140};
bool $tmp142 = $tmp141.value;
if ($tmp142) goto block21; else goto block22;
block21:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:34
org$frostlang$frostc$MethodDecl* $tmp143 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp143));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp144 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp144));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp145 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp145));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array* $tmp146 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp146));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp147 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp147));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
return;
block22:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:36
FROST_ASSERT(48 == sizeof(org$frostlang$frostc$MethodRef));
org$frostlang$frostc$MethodRef* $tmp148 = (org$frostlang$frostc$MethodRef*) frostObjectAlloc(48, (frost$core$Class*) &org$frostlang$frostc$MethodRef$class);
org$frostlang$frostc$Type** $tmp149 = &param0->FROST_TYPE;
org$frostlang$frostc$Type* $tmp150 = *$tmp149;
org$frostlang$frostc$MethodDecl* $tmp151 = *(&local5);
org$frostlang$frostc$MethodRef$init$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$org$frostlang$frostc$MethodDecl($tmp148, param0, $tmp150, $tmp151);
frost$collections$Array* $tmp152 = *(&local1);
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp153 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp154 = (frost$core$Int64) {0u};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64($tmp153, $tmp154);
org$frostlang$frostc$IR$Value* $tmp155 = org$frostlang$frostc$expression$Call$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$Q$org$frostlang$frostc$MethodRef$frost$collections$ListView$LTorg$frostlang$frostc$ASTNode$GT$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param1, ((org$frostlang$frostc$IR$Value*) NULL), $tmp148, ((frost$collections$ListView*) $tmp152), $tmp153);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp155));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp153));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp148));
org$frostlang$frostc$MethodDecl* $tmp156 = *(&local5);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp156));
*(&local5) = ((org$frostlang$frostc$MethodDecl*) NULL);
org$frostlang$frostc$ClassDecl* $tmp157 = *(&local4);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp157));
*(&local4) = ((org$frostlang$frostc$ClassDecl*) NULL);
frost$core$String* $tmp158 = *(&local2);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp158));
*(&local2) = ((frost$core$String*) NULL);
frost$core$Frost$unref$frost$core$Object$Q($tmp83);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp7));
frost$collections$Array* $tmp159 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp159));
*(&local1) = ((frost$collections$Array*) NULL);
org$frostlang$frostc$Compiler$AutoUnrefs* $tmp160 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp160));
*(&local0) = ((org$frostlang$frostc$Compiler$AutoUnrefs*) NULL);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:39
org$frostlang$frostc$IR** $tmp161 = &param0->ir;
org$frostlang$frostc$IR* $tmp162 = *$tmp161;
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp163 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp164 = (frost$core$Int64) {28u};
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position($tmp163, $tmp164, param1);
$fn166 $tmp165 = ($fn166) $tmp162->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp167 = $tmp165($tmp162, $tmp163);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp163));
return;

}
void org$frostlang$frostc$statement$Assert$compile$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$org$frostlang$frostc$ASTNode$Q(org$frostlang$frostc$Compiler* param0, org$frostlang$frostc$Position param1, org$frostlang$frostc$ASTNode* param2, org$frostlang$frostc$ASTNode* param3) {

org$frostlang$frostc$IR* local0 = NULL;
org$frostlang$frostc$IR$Value* local1 = NULL;
org$frostlang$frostc$IR$Block$ID local2;
org$frostlang$frostc$IR$Block$ID local3;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:44
org$frostlang$frostc$IR** $tmp168 = &param0->ir;
org$frostlang$frostc$IR* $tmp169 = *$tmp168;
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp169));
org$frostlang$frostc$IR* $tmp170 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp170));
*(&local0) = $tmp169;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:45
FROST_ASSERT(40 == sizeof(org$frostlang$frostc$Compiler$TypeContext));
org$frostlang$frostc$Compiler$TypeContext* $tmp171 = (org$frostlang$frostc$Compiler$TypeContext*) frostObjectAlloc(40, (frost$core$Class*) &org$frostlang$frostc$Compiler$TypeContext$class);
frost$core$Int64 $tmp172 = (frost$core$Int64) {3u};
org$frostlang$frostc$Type** $tmp173 = &param0->BIT_TYPE;
org$frostlang$frostc$Type* $tmp174 = *$tmp173;
frost$core$Bit $tmp175 = (frost$core$Bit) {false};
org$frostlang$frostc$Compiler$TypeContext$init$frost$core$Int64$org$frostlang$frostc$Type$frost$core$Bit($tmp171, $tmp172, $tmp174, $tmp175);
org$frostlang$frostc$IR$Value* $tmp176 = org$frostlang$frostc$Compiler$compileExpression$org$frostlang$frostc$ASTNode$org$frostlang$frostc$Compiler$TypeContext$R$org$frostlang$frostc$IR$Value$Q(param0, param2, $tmp171);
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
frost$core$Frost$ref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
org$frostlang$frostc$IR$Value* $tmp177 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp177));
*(&local1) = $tmp176;
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp176));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp171));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:47
org$frostlang$frostc$IR$Value* $tmp178 = *(&local1);
frost$core$Bit $tmp179 = (frost$core$Bit) {$tmp178 == NULL};
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:48
org$frostlang$frostc$IR$Value* $tmp181 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp181));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp182 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp182));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:50
org$frostlang$frostc$IR* $tmp183 = *(&local0);
$fn185 $tmp184 = ($fn185) $tmp183->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp186 = $tmp184($tmp183, &$s187);
*(&local2) = $tmp186;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:51
org$frostlang$frostc$IR* $tmp188 = *(&local0);
$fn190 $tmp189 = ($fn190) $tmp188->$class->vtable[3];
org$frostlang$frostc$IR$Block$ID $tmp191 = $tmp189($tmp188, &$s192);
*(&local3) = $tmp191;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:52
org$frostlang$frostc$IR* $tmp193 = *(&local0);
FROST_ASSERT(80 == sizeof(org$frostlang$frostc$IR$Statement));
org$frostlang$frostc$IR$Statement* $tmp194 = (org$frostlang$frostc$IR$Statement*) frostObjectAlloc(80, (frost$core$Class*) &org$frostlang$frostc$IR$Statement$class);
frost$core$Int64 $tmp195 = (frost$core$Int64) {5u};
org$frostlang$frostc$IR$Value* $tmp196 = *(&local1);
org$frostlang$frostc$IR$Value* $tmp197 = org$frostlang$frostc$Compiler$extractBuiltinBit$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$R$org$frostlang$frostc$IR$Value(param0, param1, $tmp196);
org$frostlang$frostc$IR$Block$ID $tmp198 = *(&local2);
org$frostlang$frostc$IR$Block$ID $tmp199 = *(&local3);
org$frostlang$frostc$IR$Statement$init$frost$core$Int64$org$frostlang$frostc$Position$org$frostlang$frostc$IR$Value$org$frostlang$frostc$IR$Block$ID$org$frostlang$frostc$IR$Block$ID($tmp194, $tmp195, param1, $tmp197, $tmp198, $tmp199);
$fn201 $tmp200 = ($fn201) $tmp193->$class->vtable[2];
org$frostlang$frostc$IR$Statement$ID $tmp202 = $tmp200($tmp193, $tmp194);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp197));
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp194));
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:54
org$frostlang$frostc$IR* $tmp203 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp204 = *(&local3);
$fn206 $tmp205 = ($fn206) $tmp203->$class->vtable[4];
$tmp205($tmp203, $tmp204);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:55
org$frostlang$frostc$statement$Assert$compileFail$org$frostlang$frostc$Compiler$org$frostlang$frostc$Position$org$frostlang$frostc$ASTNode$Q(param0, param1, param3);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:56
org$frostlang$frostc$IR* $tmp207 = *(&local0);
org$frostlang$frostc$IR$Block$ID $tmp208 = *(&local2);
$fn210 $tmp209 = ($fn210) $tmp207->$class->vtable[4];
$tmp209($tmp207, $tmp208);
org$frostlang$frostc$IR$Value* $tmp211 = *(&local1);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp211));
*(&local1) = ((org$frostlang$frostc$IR$Value*) NULL);
org$frostlang$frostc$IR* $tmp212 = *(&local0);
frost$core$Frost$unref$frost$core$Object$Q(((frost$core$Object*) $tmp212));
*(&local0) = ((org$frostlang$frostc$IR*) NULL);
return;

}
void org$frostlang$frostc$statement$Assert$init(org$frostlang$frostc$statement$Assert* param0) {

return;

}
void org$frostlang$frostc$statement$Assert$cleanup(org$frostlang$frostc$statement$Assert* param0) {

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/statement/Assert.frost:16
frost$core$Object$cleanup(((frost$core$Object*) param0));
return;

}

