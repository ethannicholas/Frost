#pragma once
#include "frost_c.h"
#include "Random_types.h"
typedef struct frost$math$Random frost$math$Random;
#include "frost/core/Bit_types.h"
#include "frost/core/Int32_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/Int_types.h"
#include "frost/core/Real32_types.h"
#include "frost/core/Real64_types.h"

frost$math$Random* frost$math$Random$default$R$frost$math$Random();
frost$core$Bit frost$math$Random$bit$R$frost$core$Bit(void* rawSelf);
frost$core$Int32 frost$math$Random$int32$R$frost$core$Int32(void* rawSelf);
frost$core$Int64 frost$math$Random$int64$R$frost$core$Int64(void* rawSelf);
frost$core$Int frost$math$Random$int$frost$core$Int$R$frost$core$Int(void* rawSelf, frost$core$Int p_n);
frost$core$Real32 frost$math$Random$real32$R$frost$core$Real32(void* rawSelf);
frost$core$Real64 frost$math$Random$real64$R$frost$core$Real64(void* rawSelf);

