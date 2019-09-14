#pragma once
#include "frost_c.h"
#include "RegularExpression_types.h"
typedef struct frost$core$RegularExpression frost$core$RegularExpression;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int_types.h"
typedef struct frost$core$Matcher frost$core$Matcher;

void frost$core$RegularExpression$init$frost$core$String(void* rawSelf, frost$core$String* p_regex);
void frost$core$RegularExpression$init$frost$core$String$frost$core$Int(void* rawSelf, frost$core$String* p_regex, frost$core$Int p_flags);
frost$core$Matcher* frost$core$RegularExpression$matcher$frost$core$String$R$frost$core$Matcher(void* rawSelf, frost$core$String* p_text);
void frost$core$RegularExpression$cleanup(void* rawSelf);
void frost$core$RegularExpression$compile$frost$core$String$frost$core$Int(void* rawSelf, frost$core$String* p_regex, frost$core$Int p_flags);
void frost$core$RegularExpression$destroy(void* rawSelf);

