#include "org/frostlang/frostc/pass/Analyzer/DataFlowValue.h"
#include "frost/core/Object.h"
#include "frost/core/Class.h"
#include "frost/core/String.h"
#include "frost/core/Equatable.h"
#include "frost/core/Bit.h"
#include "org/frostlang/frostc/Type.h"
#include "org/frostlang/frostc/pass/Analyzer/Definition.h"
#include "frost/collections/ListView.h"
#include "frost/core/Frost.h"
#include "org/frostlang/frostc/Symbol.h"
#include "org/frostlang/frostc/Type/Kind.h"
#include "org/frostlang/frostc/Compiler.h"
#include "frost/collections/Array.h"
#include "frost/core/Int.h"
#include "frost/collections/CollectionView.h"

__attribute__((weak)) frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim(org$frostlang$frostc$pass$Analyzer$DataFlowValue* p0, frost$core$Equatable* p1) {
    frost$core$Bit result = org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(p0, ((org$frostlang$frostc$pass$Analyzer$DataFlowValue*) p1));

    return result;
}

struct { frost$core$Class* cl; ITable* next; void* methods[2]; } org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable = { (frost$core$Class*) &frost$core$Equatable$class, NULL, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, frost$core$Equatable$$NEQ$frost$core$Equatable$T$R$frost$core$Bit} };

static frost$core$String $s1;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$class_type org$frostlang$frostc$pass$Analyzer$DataFlowValue$class = { (frost$core$Class*) &frost$core$Class$class, -999, 0, &$s1, (frost$core$Class*) &frost$core$Object$class, (ITable*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$_frost$core$Equatable, { org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String, org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup, org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit$shim, org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue} };

typedef frost$core$Bit (*$fn2)(frost$core$Equatable*, frost$core$Equatable*);
typedef frost$core$Bit (*$fn3)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);
typedef frost$core$Bit (*$fn7)(org$frostlang$frostc$pass$Analyzer$Definition*, org$frostlang$frostc$pass$Analyzer$Definition*);
typedef frost$core$String* (*$fn12)(frost$core$Object*);
typedef frost$core$String* (*$fn13)(frost$core$Object*);
typedef frost$core$String* (*$fn14)(frost$core$Object*);
typedef frost$core$String* (*$fn15)(frost$core$Object*);
typedef frost$core$String* (*$fn16)(frost$core$Object*);
typedef frost$core$String* (*$fn17)(frost$core$Object*);
typedef frost$core$String* (*$fn20)(frost$core$Object*);
typedef frost$core$String* (*$fn24)(frost$core$Object*);
typedef frost$core$String* (*$fn26)(frost$core$Object*);
typedef frost$core$String* (*$fn29)(frost$core$Object*);

static frost$core$String $s1 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65", 48, 2806633416286856336, NULL };
static frost$core$String $s8 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s9 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e", 227, 2718415438556847533, NULL };
static frost$core$String $s10 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s11 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e", 227, 2718415438556847533, NULL };
static frost$core$String $s18 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s19 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s21 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s22 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x66\x72\x6f\x73\x74", 14, -791630141084995549, NULL };
static frost$core$String $s23 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x72\x65\x66\x65\x72\x65\x6e\x63\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x28\x6f\x72\x67\x2e\x66\x72\x6f\x73\x74\x6c\x61\x6e\x67\x2e\x66\x72\x6f\x73\x74\x63\x2e\x70\x61\x73\x73\x2e\x41\x6e\x61\x6c\x79\x7a\x65\x72\x2e\x44\x65\x66\x69\x6e\x69\x74\x69\x6f\x6e\x2c\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x42\x69\x74\x29\x3e\x3f\x20\x74\x6f\x20\x66\x72\x6f\x73\x74\x2e\x63\x6f\x72\x65\x2e\x4f\x62\x6a\x65\x63\x74", 147, -6238493842772728899, NULL };
static frost$core$String $s25 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };
static frost$core$String $s27 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x44\x61\x74\x61\x46\x6c\x6f\x77\x56\x61\x6c\x75\x65\x28", 14, -2430841278758085354, NULL };
static frost$core$String $s28 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x2c\x20", 2, 563935148934614481, NULL };
static frost$core$String $s30 = { (frost$core$Class*) &frost$core$String$class, -999, 0, (frost$core$Char8*) "\x29", 1, -5808618445805089436, NULL };

void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition(void* rawSelf, org$frostlang$frostc$Type* param1, org$frostlang$frostc$pass$Analyzer$Definition* param2) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:144
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(param0, param1, param2, ((frost$collections$ListView*) NULL));
return;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(void* rawSelf, org$frostlang$frostc$Type* param1, org$frostlang$frostc$pass$Analyzer$Definition* param2, frost$collections$ListView* param3) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$Type** _7;
frost$core$Object* _10;
org$frostlang$frostc$pass$Analyzer$Definition** _12;
org$frostlang$frostc$pass$Analyzer$Definition* _13;
frost$core$Object* _14;
org$frostlang$frostc$pass$Analyzer$Definition** _16;
frost$core$Object* _19;
frost$collections$ListView** _21;
frost$collections$ListView* _22;
frost$core$Object* _23;
frost$collections$ListView** _25;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:148
_1 = ((frost$core$Object*) param1);
frost$core$Frost$ref$frost$core$Object$Q(_1);
_3 = &param0->type;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->type;
*_7 = param1;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:149
_10 = ((frost$core$Object*) param2);
frost$core$Frost$ref$frost$core$Object$Q(_10);
_12 = &param0->definition;
_13 = *_12;
_14 = ((frost$core$Object*) _13);
frost$core$Frost$unref$frost$core$Object$Q(_14);
_16 = &param0->definition;
*_16 = param2;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:150
_19 = ((frost$core$Object*) param3);
frost$core$Frost$ref$frost$core$Object$Q(_19);
_21 = &param0->nonNullImplications;
_22 = *_21;
_23 = ((frost$core$Object*) _22);
frost$core$Frost$unref$frost$core$Object$Q(_23);
_25 = &param0->nonNullImplications;
*_25 = param3;
return;

}
frost$core$Bit org$frostlang$frostc$pass$Analyzer$DataFlowValue$$EQ$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$frost$core$Bit(void* rawSelf, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param1) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

frost$core$Bit local0;
frost$core$Bit local1;
org$frostlang$frostc$Type** _1;
org$frostlang$frostc$Type* _2;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
org$frostlang$frostc$Symbol* _7;
frost$core$String** _8;
frost$core$String* _9;
org$frostlang$frostc$Symbol* _10;
frost$core$String** _11;
frost$core$String* _12;
frost$core$Bit _13;
bool _14;
org$frostlang$frostc$Type$Kind* _16;
org$frostlang$frostc$Type$Kind _17;
frost$core$Equatable* _18;
org$frostlang$frostc$Type$Kind* _19;
org$frostlang$frostc$Type$Kind _20;
frost$core$Equatable* _21;
$fn2 _22;
frost$core$Bit _23;
frost$core$Object* _24;
frost$core$Object* _26;
frost$core$Bit _32;
bool _34;
org$frostlang$frostc$pass$Analyzer$Definition** _36;
org$frostlang$frostc$pass$Analyzer$Definition* _37;
org$frostlang$frostc$pass$Analyzer$Definition** _38;
org$frostlang$frostc$pass$Analyzer$Definition* _39;
$fn3 _40;
frost$core$Bit _41;
frost$core$Bit _46;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:155
_1 = &param0->type;
_2 = *_1;
_3 = &param1->type;
_4 = *_3;
// begin inline call to function org.frostlang.frostc.Type.=(other:org.frostlang.frostc.Type):frost.core.Bit from Analyzer.frost:155:25
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/Type.frost:258
_7 = ((org$frostlang$frostc$Symbol*) _2);
_8 = &_7->name;
_9 = *_8;
_10 = ((org$frostlang$frostc$Symbol*) _4);
_11 = &_10->name;
_12 = *_11;
_13 = frost$core$String$$EQ$frost$core$String$R$frost$core$Bit(_9, _12);
_14 = _13.value;
if (_14) goto block2; else goto block3;
block2:;
_16 = &_2->typeKind;
_17 = *_16;
org$frostlang$frostc$Type$Kind$wrapper* $tmp4;
$tmp4 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp4->value = _17;
_18 = ((frost$core$Equatable*) $tmp4);
_19 = &_4->typeKind;
_20 = *_19;
org$frostlang$frostc$Type$Kind$wrapper* $tmp5;
$tmp5 = (org$frostlang$frostc$Type$Kind$wrapper*) frostObjectAlloc(sizeof(org$frostlang$frostc$Type$Kind$wrapper), (frost$core$Class*) &org$frostlang$frostc$Type$Kind$wrapperclass);
$tmp5->value = _20;
_21 = ((frost$core$Equatable*) $tmp5);
ITable* $tmp6 = _18->$class->itable;
while ($tmp6->$class != (frost$core$Class*) &frost$core$Equatable$class) {
    $tmp6 = $tmp6->next;
}
_22 = $tmp6->methods[0];
_23 = _22(_18, _21);
_24 = ((frost$core$Object*) _21);
frost$core$Frost$unref$frost$core$Object$Q(_24);
_26 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_26);
*(&local1) = _23;
goto block4;
block3:;
*(&local1) = _13;
goto block4;
block4:;
_32 = *(&local1);
_34 = _32.value;
if (_34) goto block5; else goto block6;
block5:;
_36 = &param0->definition;
_37 = *_36;
_38 = &param1->definition;
_39 = *_38;
_40 = ($fn7) _37->$class->vtable[2];
_41 = _40(_37, _39);
*(&local0) = _41;
goto block7;
block6:;
*(&local0) = _32;
goto block7;
block7:;
_46 = *(&local0);
return _46;

}
org$frostlang$frostc$pass$Analyzer$DataFlowValue* org$frostlang$frostc$pass$Analyzer$DataFlowValue$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$pass$Analyzer$DataFlowValue$R$org$frostlang$frostc$pass$Analyzer$DataFlowValue(void* rawSelf, org$frostlang$frostc$Compiler* param1, org$frostlang$frostc$pass$Analyzer$DataFlowValue* param2) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

org$frostlang$frostc$Type* local0 = NULL;
frost$collections$Array* local1 = NULL;
bool _1;
frost$core$Bit _2;
bool _3;
frost$core$Object* _6;
org$frostlang$frostc$Type** _10;
org$frostlang$frostc$Type* _11;
org$frostlang$frostc$Type** _12;
org$frostlang$frostc$Type* _13;
org$frostlang$frostc$Type* _14;
frost$core$Object* _16;
org$frostlang$frostc$Type* _18;
frost$core$Object* _19;
frost$core$Object* _22;
frost$collections$ListView** _25;
frost$collections$ListView* _26;
bool _27;
frost$core$Bit _28;
bool _29;
frost$collections$ListView** _32;
frost$collections$ListView* _33;
bool _34;
frost$core$Bit _35;
bool _36;
frost$collections$Array* _39;
frost$collections$ListView** _40;
frost$collections$ListView* _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$collections$CollectionView* _49;
frost$core$Object* _52;
frost$collections$Array* _54;
frost$core$Object* _55;
frost$core$Object* _58;
frost$collections$Array* _61;
frost$collections$ListView** _62;
frost$collections$ListView* _63;
bool _64;
frost$core$Bit _65;
bool _66;
frost$core$Int _68;
frost$collections$CollectionView* _71;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* _74;
org$frostlang$frostc$Type* _75;
org$frostlang$frostc$pass$Analyzer$Definition* _76;
frost$core$Int _77;
frost$collections$Array* _79;
frost$collections$ListView* _80;
frost$core$Object* _82;
frost$core$Object* _84;
frost$core$Object* _86;
frost$collections$Array* _88;
frost$core$Object* _89;
org$frostlang$frostc$Type* _92;
frost$core$Object* _93;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* _98;
org$frostlang$frostc$Type* _99;
org$frostlang$frostc$pass$Analyzer$Definition* _100;
frost$core$Int _101;
frost$collections$ListView** _103;
frost$collections$ListView* _104;
frost$core$Object* _106;
frost$core$Object* _108;
frost$core$Object* _110;
org$frostlang$frostc$Type* _112;
frost$core$Object* _113;
frost$collections$ListView** _118;
frost$collections$ListView* _119;
bool _120;
frost$core$Bit _121;
bool _122;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* _125;
org$frostlang$frostc$Type* _126;
org$frostlang$frostc$pass$Analyzer$Definition* _127;
frost$core$Int _128;
frost$collections$ListView** _130;
frost$collections$ListView* _131;
frost$core$Object* _133;
frost$core$Object* _135;
frost$core$Object* _137;
org$frostlang$frostc$Type* _139;
frost$core$Object* _140;
org$frostlang$frostc$pass$Analyzer$DataFlowValue* _146;
org$frostlang$frostc$Type* _147;
org$frostlang$frostc$pass$Analyzer$Definition* _148;
frost$core$Int _149;
frost$core$Object* _152;
frost$core$Object* _154;
frost$core$Object* _156;
org$frostlang$frostc$Type* _158;
frost$core$Object* _159;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:159
_1 = param0 == param2;
_2 = (frost$core$Bit) {_1};
_3 = _2.value;
if (_3) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:160
_6 = ((frost$core$Object*) param0);
frost$core$Frost$ref$frost$core$Object$Q(_6);
return param0;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:162
_10 = &param0->type;
_11 = *_10;
_12 = &param2->type;
_13 = *_12;
_14 = org$frostlang$frostc$Type$union$org$frostlang$frostc$Compiler$org$frostlang$frostc$Type$R$org$frostlang$frostc$Type(_11, param1, _13);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
_16 = ((frost$core$Object*) _14);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = *(&local0);
_19 = ((frost$core$Object*) _18);
frost$core$Frost$unref$frost$core$Object$Q(_19);
*(&local0) = _14;
_22 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_22);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:163
_25 = &param0->nonNullImplications;
_26 = *_25;
_27 = _26 != NULL;
_28 = (frost$core$Bit) {_27};
_29 = _28.value;
if (_29) goto block3; else goto block5;
block3:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:164
_32 = &param2->nonNullImplications;
_33 = *_32;
_34 = _33 != NULL;
_35 = (frost$core$Bit) {_34};
_36 = _35.value;
if (_36) goto block6; else goto block7;
block6:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:166
_39 = (frost$collections$Array*) frostObjectAlloc(sizeof(frost$collections$Array), (frost$core$Class*) &frost$collections$Array$class);
_40 = &param0->nonNullImplications;
_41 = *_40;
_42 = _41 != NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block8; else goto block9;
block9:;
_46 = (frost$core$Int) {166u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s8, _46, &$s9);
abort(); // unreachable
block8:;
_49 = ((frost$collections$CollectionView*) _41);
frost$collections$Array$init$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_39, _49);
*(&local1) = ((frost$collections$Array*) NULL);
_52 = ((frost$core$Object*) _39);
frost$core$Frost$ref$frost$core$Object$Q(_52);
_54 = *(&local1);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_55);
*(&local1) = _39;
_58 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_58);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:167
_61 = *(&local1);
_62 = &param2->nonNullImplications;
_63 = *_62;
_64 = _63 != NULL;
_65 = (frost$core$Bit) {_64};
_66 = _65.value;
if (_66) goto block10; else goto block11;
block11:;
_68 = (frost$core$Int) {167u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s10, _68, &$s11);
abort(); // unreachable
block10:;
_71 = ((frost$collections$CollectionView*) _63);
frost$collections$Array$addAll$frost$collections$CollectionView$LTfrost$collections$Array$T$GT(_61, _71);
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:168
_74 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
_75 = *(&local0);
_76 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$Definition), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
_77 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(_76, _77);
_79 = *(&local1);
_80 = ((frost$collections$ListView*) _79);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(_74, _75, _76, _80);
_82 = ((frost$core$Object*) _74);
frost$core$Frost$ref$frost$core$Object$Q(_82);
_84 = ((frost$core$Object*) _76);
frost$core$Frost$unref$frost$core$Object$Q(_84);
_86 = ((frost$core$Object*) _74);
frost$core$Frost$unref$frost$core$Object$Q(_86);
_88 = *(&local1);
_89 = ((frost$core$Object*) _88);
frost$core$Frost$unref$frost$core$Object$Q(_89);
*(&local1) = ((frost$collections$Array*) NULL);
_92 = *(&local0);
_93 = ((frost$core$Object*) _92);
frost$core$Frost$unref$frost$core$Object$Q(_93);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _74;
block7:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:170
_98 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
_99 = *(&local0);
_100 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$Definition), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
_101 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(_100, _101);
_103 = &param0->nonNullImplications;
_104 = *_103;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(_98, _99, _100, _104);
_106 = ((frost$core$Object*) _98);
frost$core$Frost$ref$frost$core$Object$Q(_106);
_108 = ((frost$core$Object*) _100);
frost$core$Frost$unref$frost$core$Object$Q(_108);
_110 = ((frost$core$Object*) _98);
frost$core$Frost$unref$frost$core$Object$Q(_110);
_112 = *(&local0);
_113 = ((frost$core$Object*) _112);
frost$core$Frost$unref$frost$core$Object$Q(_113);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _98;
block5:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:172
_118 = &param2->nonNullImplications;
_119 = *_118;
_120 = _119 != NULL;
_121 = (frost$core$Bit) {_120};
_122 = _121.value;
if (_122) goto block12; else goto block13;
block12:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:173
_125 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
_126 = *(&local0);
_127 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$Definition), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
_128 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(_127, _128);
_130 = &param2->nonNullImplications;
_131 = *_130;
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition$frost$collections$ListView$LT$LPorg$frostlang$frostc$pass$Analyzer$Definition$Cfrost$core$Bit$RP$GT$Q(_125, _126, _127, _131);
_133 = ((frost$core$Object*) _125);
frost$core$Frost$ref$frost$core$Object$Q(_133);
_135 = ((frost$core$Object*) _127);
frost$core$Frost$unref$frost$core$Object$Q(_135);
_137 = ((frost$core$Object*) _125);
frost$core$Frost$unref$frost$core$Object$Q(_137);
_139 = *(&local0);
_140 = ((frost$core$Object*) _139);
frost$core$Frost$unref$frost$core$Object$Q(_140);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _125;
block13:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:175
_146 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$DataFlowValue), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$DataFlowValue$class);
_147 = *(&local0);
_148 = (org$frostlang$frostc$pass$Analyzer$Definition*) frostObjectAlloc(sizeof(org$frostlang$frostc$pass$Analyzer$Definition), (frost$core$Class*) &org$frostlang$frostc$pass$Analyzer$Definition$class);
_149 = (frost$core$Int) {4u};
org$frostlang$frostc$pass$Analyzer$Definition$init$frost$core$Int(_148, _149);
org$frostlang$frostc$pass$Analyzer$DataFlowValue$init$org$frostlang$frostc$Type$org$frostlang$frostc$pass$Analyzer$Definition(_146, _147, _148);
_152 = ((frost$core$Object*) _146);
frost$core$Frost$ref$frost$core$Object$Q(_152);
_154 = ((frost$core$Object*) _148);
frost$core$Frost$unref$frost$core$Object$Q(_154);
_156 = ((frost$core$Object*) _146);
frost$core$Frost$unref$frost$core$Object$Q(_156);
_158 = *(&local0);
_159 = ((frost$core$Object*) _158);
frost$core$Frost$unref$frost$core$Object$Q(_159);
*(&local0) = ((org$frostlang$frostc$Type*) NULL);
return _146;

}
frost$core$String* org$frostlang$frostc$pass$Analyzer$DataFlowValue$get_asString$R$frost$core$String(void* rawSelf) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

frost$collections$ListView** _1;
frost$collections$ListView* _2;
bool _3;
frost$core$Bit _4;
bool _5;
org$frostlang$frostc$Type** _8;
org$frostlang$frostc$Type* _9;
frost$core$Object* _10;
$fn12 _13;
frost$core$String* _14;
frost$core$String* _15;
frost$core$Object* _16;
frost$core$Object* _18;
frost$core$Object* _20;
frost$core$String* _23;
org$frostlang$frostc$pass$Analyzer$Definition** _24;
org$frostlang$frostc$pass$Analyzer$Definition* _25;
frost$core$Object* _26;
$fn13 _29;
frost$core$String* _30;
frost$core$String* _31;
frost$core$Object* _32;
frost$core$Object* _34;
frost$core$Object* _36;
frost$core$String* _39;
frost$collections$ListView** _40;
frost$collections$ListView* _41;
bool _42;
frost$core$Bit _43;
bool _44;
frost$core$Int _46;
frost$core$Object* _49;
$fn14 _52;
frost$core$String* _53;
frost$core$String* _54;
frost$core$Object* _55;
frost$core$Object* _57;
frost$core$Object* _59;
frost$core$String* _62;
frost$core$Object* _63;
frost$core$Object* _65;
frost$core$Object* _67;
frost$core$Object* _69;
frost$core$Object* _71;
frost$core$Object* _73;
frost$core$Object* _75;
org$frostlang$frostc$Type** _79;
org$frostlang$frostc$Type* _80;
frost$core$Object* _81;
$fn15 _84;
frost$core$String* _85;
frost$core$String* _86;
frost$core$Object* _87;
frost$core$Object* _89;
frost$core$Object* _91;
frost$core$String* _94;
org$frostlang$frostc$pass$Analyzer$Definition** _95;
org$frostlang$frostc$pass$Analyzer$Definition* _96;
frost$core$Object* _97;
$fn16 _100;
frost$core$String* _101;
frost$core$String* _102;
frost$core$Object* _103;
frost$core$Object* _105;
frost$core$Object* _107;
frost$core$String* _110;
frost$core$Object* _111;
frost$core$Object* _113;
frost$core$Object* _115;
frost$core$Object* _117;
frost$core$Object* _119;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:180
_1 = &param0->nonNullImplications;
_2 = *_1;
_3 = _2 != NULL;
_4 = (frost$core$Bit) {_3};
_5 = _4.value;
if (_5) goto block1; else goto block2;
block1:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:181
_8 = &param0->type;
_9 = *_8;
_10 = ((frost$core$Object*) _9);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_13 = ($fn17) _10->$class->vtable[0];
_14 = _13(_10);
_15 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s18, _14);
_16 = ((frost$core$Object*) _15);
frost$core$Frost$ref$frost$core$Object$Q(_16);
_18 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_18);
_20 = ((frost$core$Object*) _14);
frost$core$Frost$unref$frost$core$Object$Q(_20);
_23 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_15, &$s19);
_24 = &param0->definition;
_25 = *_24;
_26 = ((frost$core$Object*) _25);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_29 = ($fn20) _26->$class->vtable[0];
_30 = _29(_26);
_31 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_23, _30);
_32 = ((frost$core$Object*) _31);
frost$core$Frost$ref$frost$core$Object$Q(_32);
_34 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_34);
_36 = ((frost$core$Object*) _30);
frost$core$Frost$unref$frost$core$Object$Q(_36);
_39 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_31, &$s21);
_40 = &param0->nonNullImplications;
_41 = *_40;
_42 = _41 != NULL;
_43 = (frost$core$Bit) {_42};
_44 = _43.value;
if (_44) goto block5; else goto block6;
block6:;
_46 = (frost$core$Int) {181u};
frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int$frost$core$String(&$s22, _46, &$s23);
abort(); // unreachable
block5:;
_49 = ((frost$core$Object*) _41);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:181:24
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_52 = ($fn24) _49->$class->vtable[0];
_53 = _52(_49);
_54 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_39, _53);
_55 = ((frost$core$Object*) _54);
frost$core$Frost$ref$frost$core$Object$Q(_55);
_57 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_57);
_59 = ((frost$core$Object*) _53);
frost$core$Frost$unref$frost$core$Object$Q(_59);
_62 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_54, &$s25);
_63 = ((frost$core$Object*) _62);
frost$core$Frost$ref$frost$core$Object$Q(_63);
_65 = ((frost$core$Object*) _62);
frost$core$Frost$unref$frost$core$Object$Q(_65);
_67 = ((frost$core$Object*) _54);
frost$core$Frost$unref$frost$core$Object$Q(_67);
_69 = ((frost$core$Object*) _39);
frost$core$Frost$unref$frost$core$Object$Q(_69);
_71 = ((frost$core$Object*) _31);
frost$core$Frost$unref$frost$core$Object$Q(_71);
_73 = ((frost$core$Object*) _23);
frost$core$Frost$unref$frost$core$Object$Q(_73);
_75 = ((frost$core$Object*) _15);
frost$core$Frost$unref$frost$core$Object$Q(_75);
return _62;
block2:;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:183
_79 = &param0->type;
_80 = *_79;
_81 = ((frost$core$Object*) _80);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_84 = ($fn26) _81->$class->vtable[0];
_85 = _84(_81);
_86 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(&$s27, _85);
_87 = ((frost$core$Object*) _86);
frost$core$Frost$ref$frost$core$Object$Q(_87);
_89 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_89);
_91 = ((frost$core$Object*) _85);
frost$core$Frost$unref$frost$core$Object$Q(_91);
_94 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_86, &$s28);
_95 = &param0->definition;
_96 = *_95;
_97 = ((frost$core$Object*) _96);
// begin inline call to function frost.core.String.+(other:frost.core.Object):frost.core.String from Analyzer.frost:183:20
// /Users/ethannicholas/Dropbox/Frost/src/frost/core/String.frost:560
_100 = ($fn29) _97->$class->vtable[0];
_101 = _100(_97);
_102 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_94, _101);
_103 = ((frost$core$Object*) _102);
frost$core$Frost$ref$frost$core$Object$Q(_103);
_105 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_105);
_107 = ((frost$core$Object*) _101);
frost$core$Frost$unref$frost$core$Object$Q(_107);
_110 = frost$core$String$$ADD$frost$core$String$R$frost$core$String(_102, &$s30);
_111 = ((frost$core$Object*) _110);
frost$core$Frost$ref$frost$core$Object$Q(_111);
_113 = ((frost$core$Object*) _110);
frost$core$Frost$unref$frost$core$Object$Q(_113);
_115 = ((frost$core$Object*) _102);
frost$core$Frost$unref$frost$core$Object$Q(_115);
_117 = ((frost$core$Object*) _94);
frost$core$Frost$unref$frost$core$Object$Q(_117);
_119 = ((frost$core$Object*) _86);
frost$core$Frost$unref$frost$core$Object$Q(_119);
return _110;

}
void org$frostlang$frostc$pass$Analyzer$DataFlowValue$cleanup(void* rawSelf) {
org$frostlang$frostc$pass$Analyzer$DataFlowValue* param0 = (org$frostlang$frostc$pass$Analyzer$DataFlowValue*) rawSelf;

frost$core$Object* _1;
org$frostlang$frostc$Type** _3;
org$frostlang$frostc$Type* _4;
frost$core$Object* _5;
org$frostlang$frostc$pass$Analyzer$Definition** _7;
org$frostlang$frostc$pass$Analyzer$Definition* _8;
frost$core$Object* _9;
frost$collections$ListView** _11;
frost$collections$ListView* _12;
frost$core$Object* _13;
// /Users/ethannicholas/Dropbox/Frost/src/frostc/org/frostlang/frostc/pass/Analyzer.frost:99
_1 = ((frost$core$Object*) param0);
frost$core$Object$cleanup(_1);
_3 = &param0->type;
_4 = *_3;
_5 = ((frost$core$Object*) _4);
frost$core$Frost$unref$frost$core$Object$Q(_5);
_7 = &param0->definition;
_8 = *_7;
_9 = ((frost$core$Object*) _8);
frost$core$Frost$unref$frost$core$Object$Q(_9);
_11 = &param0->nonNullImplications;
_12 = *_11;
_13 = ((frost$core$Object*) _12);
frost$core$Frost$unref$frost$core$Object$Q(_13);
return;

}

