#pragma once
#include "frost_c.h"
#include "OutputStream_types.h"
typedef struct frost$core$Error frost$core$Error;
typedef struct frost$io$OutputStream frost$io$OutputStream;
#include "frost/core/UInt8_types.h"
#include "frost/core/UInt16_types.h"
#include "frost/core/UInt32_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Int8_types.h"
#include "frost/core/Int16_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/unsafe/NewPointer_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$Array frost$collections$Array;
#include "frost/core/Char8_types.h"
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Object frost$core$Object;

frost$core$Error* frost$io$OutputStream$write$frost$core$UInt8$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt8 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt16$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt16 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt32$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt32 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$UInt64$R$frost$core$Error$Q(void* rawSelf, frost$core$UInt64 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$Int8$R$frost$core$Error$Q(void* rawSelf, frost$core$Int8 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$Int16$R$frost$core$Error$Q(void* rawSelf, frost$core$Int16 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$Int32$R$frost$core$Error$Q(void* rawSelf, frost$core$Int32 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$core$Int64$R$frost$core$Error$Q(void* rawSelf, frost$core$Int64 p_value);
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$NewPointer$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$unsafe$NewPointer p_ptr, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$NewPointer$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$unsafe$NewPointer p_ptr, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$unsafe$NewPointer$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$unsafe$NewPointer p_ptr, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$UInt8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* p_a, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Int8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* p_a, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$collections$Array$LTfrost$core$Char8$GT$frost$core$Int$R$frost$core$Error$Q(void* rawSelf, frost$collections$Array* p_a, frost$core$Int p_count);
frost$core$Error* frost$io$OutputStream$write$frost$core$Char8$R$frost$core$Error$Q(void* rawSelf, frost$core$Char8 p_value);
frost$core$Error* frost$io$OutputStream$print$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* p_s);
frost$core$Error* frost$io$OutputStream$print$frost$core$Object$R$frost$core$Error$Q(void* rawSelf, frost$core$Object* p_o);
frost$core$Error* frost$io$OutputStream$printLine$frost$core$String$R$frost$core$Error$Q(void* rawSelf, frost$core$String* p_s);
frost$core$Error* frost$io$OutputStream$printLine$frost$core$Object$R$frost$core$Error$Q(void* rawSelf, frost$core$Object* p_o);
frost$core$Error* frost$io$OutputStream$printLine$R$frost$core$Error$Q(void* rawSelf);
frost$core$Error* frost$io$OutputStream$flush$R$frost$core$Error$Q(void* rawSelf);
frost$core$Error* frost$io$OutputStream$close$R$frost$core$Error$Q(void* rawSelf);
void frost$io$OutputStream$init(void* rawSelf);
void frost$io$OutputStream$cleanup(void* rawSelf);

