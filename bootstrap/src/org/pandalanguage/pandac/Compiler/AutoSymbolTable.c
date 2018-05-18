#include "org/pandalanguage/pandac/Compiler/AutoSymbolTable.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/SymbolTable.h"
#include "panda/core/Panda.h"
#include "panda/core/Bit.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Compiler$AutoSymbolTable$class_type org$pandalanguage$pandac$Compiler$AutoSymbolTable$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Compiler$AutoSymbolTable$cleanup} };


static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x43\x6f\x6d\x70\x69\x6c\x65\x72\x2e\x41\x75\x74\x6f\x53\x79\x6d\x62\x6f\x6c\x54\x61\x62\x6c\x65", 49, -1329876615109052662, NULL };

void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler) {
    org$pandalanguage$pandac$SymbolTable* $tmp2;
    self->compiler = NULL;
    self->oldSymbolTable = NULL;
    self->newSymbolTable = NULL;
    org$pandalanguage$pandac$SymbolTable* $tmp3 = (org$pandalanguage$pandac$SymbolTable*) pandaObjectAlloc(48, (panda$core$Class*) &org$pandalanguage$pandac$SymbolTable$class);
    org$pandalanguage$pandac$SymbolTable$init$org$pandalanguage$pandac$SymbolTable($tmp3, p_compiler->symbolTable);
    $tmp2 = $tmp3;
    org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(self, p_compiler, $tmp2);
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2));
}
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$SymbolTable(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self, org$pandalanguage$pandac$Compiler* p_compiler, org$pandalanguage$pandac$SymbolTable* p_symbolTable) {
    org$pandalanguage$pandac$Compiler* $tmp4;
    org$pandalanguage$pandac$Compiler* $tmp5;
    org$pandalanguage$pandac$SymbolTable* $tmp6;
    org$pandalanguage$pandac$SymbolTable* $tmp7;
    org$pandalanguage$pandac$SymbolTable* $tmp8;
    org$pandalanguage$pandac$SymbolTable* $tmp9;
    org$pandalanguage$pandac$SymbolTable* $tmp10;
    org$pandalanguage$pandac$SymbolTable* $tmp11;
    self->compiler = NULL;
    self->oldSymbolTable = NULL;
    self->newSymbolTable = NULL;
    {
        $tmp4 = self->compiler;
        $tmp5 = p_compiler;
        self->compiler = $tmp5;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp5));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp4));
    }
    {
        $tmp6 = self->oldSymbolTable;
        $tmp7 = p_compiler->symbolTable;
        self->oldSymbolTable = $tmp7;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp7));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    }
    {
        $tmp8 = self->newSymbolTable;
        $tmp9 = p_symbolTable;
        self->newSymbolTable = $tmp9;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp9));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        $tmp10 = p_compiler->symbolTable;
        $tmp11 = p_symbolTable;
        p_compiler->symbolTable = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp10));
    }
}
void org$pandalanguage$pandac$Compiler$AutoSymbolTable$cleanup(org$pandalanguage$pandac$Compiler$AutoSymbolTable* self) {
    org$pandalanguage$pandac$SymbolTable* $tmp15;
    org$pandalanguage$pandac$SymbolTable* $tmp16;
    int $tmp14;
    {
        PANDA_ASSERT(((panda$core$Bit) { ((panda$core$Object*) self->compiler->symbolTable) == ((panda$core$Object*) self->newSymbolTable) }).value);
        {
            $tmp15 = self->compiler->symbolTable;
            $tmp16 = self->oldSymbolTable;
            self->compiler->symbolTable = $tmp16;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp16));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp15));
        }
    }
    $tmp14 = -1;
    goto $l12;
    $l12:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp14) {
        case -1: goto $l17;
    }
    $l17:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->compiler));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->oldSymbolTable));
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) self->newSymbolTable));
}

