#include "org/pandalanguage/pandac/Compiler/AutoScope.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Panda.h"
#include "panda/collections/Stack.h"
#include "org/pandalanguage/pandac/Compiler/EnclosingContext.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoScope$class_type org$pandalanguage$pandac$Compiler$AutoScope$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoScope$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x63\x6f\x70\x65", 43, -1263393671590745366, NULL };
static panda$core$String $s45 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };
static panda$core$String $s57 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x70\x61\x6e\x64\x61", 14, -3408958965109419534, NULL };

void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoScope* param0, org$pandalanguage$pandac$Compiler* param1) {

// line 144
org$pandalanguage$pandac$SymbolTable* $tmp2 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
org$pandalanguage$pandac$SymbolTable** $tmp3 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp4 = *$tmp3;
org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp2, $tmp4);
org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(param0, param1, $tmp2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2));
return;

}
void org$pandalanguage$pandac$Compiler$AutoScope$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoScope* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$SymbolTable* param2) {

// line 148
org$pandalanguage$pandac$Compiler** $tmp5 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp6 = *$tmp5;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param1));
org$pandalanguage$pandac$Compiler** $tmp7 = &param0->compiler;
*$tmp7 = param1;
// line 149
org$pandalanguage$pandac$SymbolTable** $tmp8 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp9 = *$tmp8;
org$pandalanguage$pandac$SymbolTable** $tmp10 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp11 = *$tmp10;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp11));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
org$pandalanguage$pandac$SymbolTable** $tmp12 = &param0->oldSymbolTable;
*$tmp12 = $tmp9;
// line 150
org$pandalanguage$pandac$SymbolTable** $tmp13 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp14 = *$tmp13;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp14));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$SymbolTable** $tmp15 = &param0->newSymbolTable;
*$tmp15 = param2;
// line 151
org$pandalanguage$pandac$SymbolTable** $tmp16 = &param1->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp17 = *$tmp16;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp17));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$SymbolTable** $tmp18 = &param1->symbolTable;
*$tmp18 = param2;
// line 152
panda$collections$Stack** $tmp19 = &param1->enclosingContexts;
panda$collections$Stack* $tmp20 = *$tmp19;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp21 = (org$pandalanguage$pandac$Compiler$EnclosingContext*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$EnclosingContext$class);
panda$core$Int64 $tmp22 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Compiler$EnclosingContext$init$panda$core$Int64($tmp21, $tmp22);
panda$collections$Stack$push$panda$collections$Stack$T($tmp20, ((panda$core$Object*) $tmp21));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp21));
return;

}
void org$pandalanguage$pandac$Compiler$AutoScope$cleanup(org$pandalanguage$pandac$Compiler$AutoScope* param0) {

org$pandalanguage$pandac$Compiler$EnclosingContext* local0 = NULL;
// line 157
goto block1;
block1:;
// line 158
org$pandalanguage$pandac$Compiler** $tmp23 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp24 = *$tmp23;
panda$collections$Stack** $tmp25 = &$tmp24->enclosingContexts;
panda$collections$Stack* $tmp26 = *$tmp25;
panda$core$Object* $tmp27 = panda$collections$Stack$pop$R$panda$collections$Stack$T($tmp26);
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp28 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp28));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp27)));
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) $tmp27);
panda$core$Panda$unref$panda$core$Object$Q($tmp27);
// line 159
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp29 = *(&local0);
panda$core$Int64* $tmp30 = &$tmp29->$rawValue;
panda$core$Int64 $tmp31 = *$tmp30;
panda$core$Int64 $tmp32 = (panda$core$Int64) {1};
panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp32);
bool $tmp34 = $tmp33.value;
if ($tmp34) goto block4; else goto block5;
block4:;
// line 161
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp35 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing pop
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block2;
block5:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {2};
panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp31, $tmp36);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block6; else goto block7;
block6:;
// line 163
org$pandalanguage$pandac$Compiler** $tmp39 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp40 = *$tmp39;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp41 = *(&local0);
org$pandalanguage$pandac$Compiler$leaveScope$org$pandalanguage$pandac$Compiler$EnclosingContext($tmp40, $tmp41);
goto block3;
block7:;
// line 165
panda$core$Bit $tmp42 = panda$core$Bit$init$builtin_bit(false);
bool $tmp43 = $tmp42.value;
if ($tmp43) goto block8; else goto block9;
block9:;
panda$core$Int64 $tmp44 = (panda$core$Int64) {165};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s45, $tmp44);
abort(); // unreachable
block8:;
goto block3;
block3:;
org$pandalanguage$pandac$Compiler$EnclosingContext* $tmp46 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing pop
*(&local0) = ((org$pandalanguage$pandac$Compiler$EnclosingContext*) NULL);
goto block1;
block2:;
// line 168
org$pandalanguage$pandac$Compiler** $tmp47 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp48 = *$tmp47;
org$pandalanguage$pandac$SymbolTable** $tmp49 = &$tmp48->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp50 = *$tmp49;
org$pandalanguage$pandac$SymbolTable** $tmp51 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp52 = *$tmp51;
bool $tmp53 = $tmp50 == $tmp52;
panda$core$Bit $tmp54 = panda$core$Bit$init$builtin_bit($tmp53);
bool $tmp55 = $tmp54.value;
if ($tmp55) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp56 = (panda$core$Int64) {168};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s57, $tmp56);
abort(); // unreachable
block10:;
// line 169
org$pandalanguage$pandac$Compiler** $tmp58 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp59 = *$tmp58;
org$pandalanguage$pandac$SymbolTable** $tmp60 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp61 = *$tmp60;
org$pandalanguage$pandac$SymbolTable** $tmp62 = &$tmp59->symbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp63 = *$tmp62;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp63));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp61));
org$pandalanguage$pandac$SymbolTable** $tmp64 = &$tmp59->symbolTable;
*$tmp64 = $tmp61;
org$pandalanguage$pandac$Compiler** $tmp65 = &param0->compiler;
org$pandalanguage$pandac$Compiler* $tmp66 = *$tmp65;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp66));
org$pandalanguage$pandac$SymbolTable** $tmp67 = &param0->oldSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp68 = *$tmp67;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp68));
org$pandalanguage$pandac$SymbolTable** $tmp69 = &param0->newSymbolTable;
org$pandalanguage$pandac$SymbolTable* $tmp70 = *$tmp69;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp70));
return;

}

