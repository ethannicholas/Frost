#pragma once
#include "frost_c.h"
#include "MapWriter_types.h"
typedef struct frost$collections$MapWriter frost$collections$MapWriter;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;

void frost$collections$MapWriter$$IDXEQ$frost$collections$MapWriter$K$frost$collections$MapWriter$V(void* rawSelf, frost$core$Object* p_key, frost$core$Object* p_value);
void frost$collections$MapWriter$remove$frost$collections$MapWriter$K(void* rawSelf, frost$core$Object* p_key);
void frost$collections$MapWriter$filterInPlace$$LPfrost$collections$MapWriter$K$Cfrost$collections$MapWriter$V$RP$EQ$GT$LPfrost$core$Bit$RP(void* rawSelf, frost$core$MutableMethod* p_test);
void frost$collections$MapWriter$clear(void* rawSelf);

