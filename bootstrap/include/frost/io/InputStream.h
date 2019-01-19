#pragma once
#include "frost_c.h"
#include "InputStream_types.h"
#include "frost/core/UInt8_types.h"
typedef struct frost$io$InputStream frost$io$InputStream;
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$collections$Iterator frost$collections$Iterator;
typedef struct frost$core$Error frost$core$Error;

frost$core$UInt8$nullable frost$io$InputStream$read$R$frost$core$UInt8$Q(frost$io$InputStream* self);
frost$core$UInt16$nullable frost$io$InputStream$read$R$frost$core$UInt16$Q(frost$io$InputStream* self);
frost$core$UInt32$nullable frost$io$InputStream$read$R$frost$core$UInt32$Q(frost$io$InputStream* self);
frost$core$UInt64$nullable frost$io$InputStream$read$R$frost$core$UInt64$Q(frost$io$InputStream* self);
frost$core$Int8$nullable frost$io$InputStream$read$R$frost$core$Int8$Q(frost$io$InputStream* self);
frost$core$Int16$nullable frost$io$InputStream$read$R$frost$core$Int16$Q(frost$io$InputStream* self);
frost$core$Int32$nullable frost$io$InputStream$read$R$frost$core$Int32$Q(frost$io$InputStream* self);
frost$core$Int64$nullable frost$io$InputStream$read$R$frost$core$Int64$Q(frost$io$InputStream* self);
frost$core$Char8$nullable frost$io$InputStream$read$R$frost$core$Char8$Q(frost$io$InputStream* self);
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$UInt8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* self, frost$core$UInt8* p_buffer, frost$core$Int64 p_max);
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Int8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* self, frost$core$Int8* p_buffer, frost$core$Int64 p_max);
frost$core$Int64 frost$io$InputStream$read$frost$unsafe$Pointer$LTfrost$core$Char8$GT$frost$core$Int64$R$frost$core$Int64(frost$io$InputStream* self, frost$core$Char8* p_buffer, frost$core$Int64 p_max);
frost$core$String* frost$io$InputStream$readFully$R$frost$core$String(frost$io$InputStream* self);
frost$collections$Array* frost$io$InputStream$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$InputStream* self);
frost$core$String* frost$io$InputStream$readLine$R$frost$core$String$Q(frost$io$InputStream* self);
frost$core$Maybe* frost$io$InputStream$sendTo$frost$io$OutputStream$R$frost$core$Maybe$LTfrost$core$Int64$GT(frost$io$InputStream* self, frost$io$OutputStream* p_out);
frost$collections$Iterator* frost$io$InputStream$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$InputStream* self);
frost$core$Error* frost$io$InputStream$close$R$frost$core$Error$Q(frost$io$InputStream* self);
void frost$io$InputStream$init(frost$io$InputStream* self);
void frost$io$InputStream$cleanup(frost$io$InputStream* self);

