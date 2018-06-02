#pragma once
#include "panda_c.h"
#include "RegularExpression_types.h"
typedef struct panda$core$RegularExpression panda$core$RegularExpression;
typedef struct panda$core$String panda$core$String;
typedef struct panda$core$Matcher panda$core$Matcher;

void panda$core$RegularExpression$init$panda$core$String(panda$core$RegularExpression* self, panda$core$String* p_regex);
panda$core$Matcher* panda$core$RegularExpression$matcher$panda$core$String$R$panda$core$Matcher(panda$core$RegularExpression* self, panda$core$String* p_text);
void panda$core$RegularExpression$cleanup(panda$core$RegularExpression* self);
void panda$core$RegularExpression$compile$panda$core$String(panda$core$RegularExpression* self, panda$core$String* p_regex);
void panda$core$RegularExpression$destroy(panda$core$RegularExpression* self);

