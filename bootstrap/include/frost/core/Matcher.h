#pragma once
#include "frost_c.h"
#include "Matcher_types.h"
typedef struct frost$core$Matcher frost$core$Matcher;
#include "frost/core/Bit_types.h"
#include "frost/core/String/Index_types.h"
typedef struct frost$core$MutableString frost$core$MutableString;
typedef struct frost$core$String frost$core$String;
#include "frost/core/Int64_types.h"

void frost$core$Matcher$init(frost$core$Matcher* self);
void frost$core$Matcher$matches$R$frost$core$Bit(frost$core$Bit* result, frost$core$Matcher* self);
frost$core$Bit frost$core$Matcher$find$R$frost$core$Bit(frost$core$Matcher* self);
frost$core$Bit frost$core$Matcher$find$frost$core$String$Index$R$frost$core$Bit(frost$core$Matcher* self, frost$core$String$Index p_start);
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String(frost$core$Matcher* self, frost$core$MutableString* p_target, frost$core$String* p_replacement);
void frost$core$Matcher$appendReplacement$frost$core$MutableString$frost$core$String$frost$core$Bit(frost$core$Matcher* self, frost$core$MutableString* p_target, frost$core$String* p_replacement, frost$core$Bit p_allowGroupReferences);
void frost$core$Matcher$appendTail$frost$core$MutableString(frost$core$Matcher* self, frost$core$MutableString* p_target);
void frost$core$Matcher$nativeFind$frost$core$String$Index$R$frost$core$Bit(frost$core$Bit* result, frost$core$Matcher* self, frost$core$String$Index p_start);
void frost$core$Matcher$get_start$R$frost$core$String$Index(frost$core$String$Index* result, frost$core$Matcher* self);
void frost$core$Matcher$get_end$R$frost$core$String$Index(frost$core$String$Index* result, frost$core$Matcher* self);
void frost$core$Matcher$get_groupCount$R$frost$core$Int64(frost$core$Int64* result, frost$core$Matcher* self);
frost$core$String* frost$core$Matcher$group$frost$core$Int64$R$frost$core$String$Q(frost$core$Matcher* self, frost$core$Int64 p_index);
void frost$core$Matcher$cleanup(frost$core$Matcher* self);
void frost$core$Matcher$destroy(frost$core$Matcher* self);
