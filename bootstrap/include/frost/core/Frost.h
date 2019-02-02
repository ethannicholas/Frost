#pragma once
#include "frost_c.h"
#include "Frost_types.h"
typedef struct frost$core$Frost frost$core$Frost;
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$Weak frost$core$Weak;
typedef struct frost$collections$IdentityMap frost$collections$IdentityMap;
#include "frost/core/Real64_types.h"
#include "frost/core/Int64_types.h"
#include "frost/core/UInt64_types.h"
#include "frost/core/Char32_types.h"
#include "frost/core/Bit_types.h"
typedef struct frost$collections$List frost$collections$List;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;

void frost$core$Frost$init(frost$core$Frost* self);
frost$core$Maybe* frost$core$Frost$success$frost$core$Object$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$Object* p_o);
frost$core$Maybe* frost$core$Frost$error$frost$core$String$R$frost$core$Maybe$LTfrost$core$Object$GT$Q(frost$core$String* p_msg);
void frost$core$Frost$ref$frost$core$Object$Q(frost$core$Object* p_o);
void frost$core$Frost$unref$frost$core$Object$Q(frost$core$Object* p_o);
void frost$core$Frost$addWeakReference$frost$core$Weak$LTfrost$core$Frost$addWeakReference$T$GT(frost$core$Weak* p_w);
void frost$core$Frost$_addWeakReference$frost$core$Weak$LTfrost$core$Object$GT$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Weak* p_w, frost$collections$IdentityMap* p_map);
void frost$core$Frost$weakReferentDestroyed$frost$core$Object$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Weak$LTfrost$core$Object$GT$GT$GT(frost$core$Object* p_o, frost$collections$IdentityMap* p_map);
frost$collections$IdentityMap* frost$core$Frost$createWeakReferenceMap$R$frost$collections$IdentityMap$LTfrost$core$Object$Cfrost$collections$Array$LTfrost$core$Object$GT$GT();
void frost$core$Frost$toReal64$frost$core$String$R$frost$core$Real64(frost$core$Real64* result, frost$core$String* p_s);
void frost$core$Frost$floatToIntBits$frost$core$Real64$R$frost$core$Int64(frost$core$Int64* result, frost$core$Real64 p_r);
void frost$core$Frost$addressOf$frost$core$Object$R$frost$core$Int64(frost$core$Int64* result, frost$core$Object* p_o);
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64(frost$core$String* p_file, frost$core$Int64 p_line);
void frost$core$Frost$assertionFailure$frost$core$String$frost$core$Int64$frost$core$String(frost$core$String* p_file, frost$core$Int64 p_line, frost$core$String* p_msg);
frost$core$UInt64$nullable frost$core$Frost$digit$frost$core$Char32$R$frost$core$UInt64$Q(frost$core$Char32 p_c);
frost$core$UInt64$nullable frost$core$Frost$parse$frost$core$String$frost$core$Int64$R$frost$core$UInt64$Q(frost$core$String* p_str, frost$core$Int64 p_rawRadix);
float frost$core$Frost$sqrt$builtin_float32$R$builtin_float32(float p_v);
double frost$core$Frost$sqrt$builtin_float64$R$builtin_float64(double p_v);
int64_t frost$core$Frost$currentTime$R$builtin_int64();
frost$core$String* frost$core$Frost$align$frost$core$String$frost$core$String$R$frost$core$String(frost$core$String* p_str, frost$core$String* p_specifier);
frost$core$String* frost$core$Frost$format$frost$core$Bit$frost$core$UInt64$frost$core$UInt64$frost$core$String$R$frost$core$String(frost$core$Bit p_sign, frost$core$UInt64 p_rawValue, frost$core$UInt64 p_mask, frost$core$String* p_fmt);
void frost$core$Frost$debugPrint$builtin_int64(int64_t p_i);
void frost$core$Frost$debugPrint$frost$core$Object(frost$core$Object* p_o);
frost$core$String* frost$core$Frost$pointerConvert$frost$unsafe$Pointer$LTfrost$core$Object$Q$GT$R$frost$core$String(frost$core$Object** p_p);
void frost$core$Frost$disableRefErrorReporting();
void frost$core$Frost$swap$frost$collections$List$LTfrost$core$Frost$swap$T$GT$frost$core$Int64$frost$core$Int64(frost$collections$List* p_a, frost$core$Int64 p_i1, frost$core$Int64 p_i2);
void frost$core$Frost$sort$frost$collections$List$LTfrost$core$Frost$sort$T$GT$frost$core$Int64$frost$core$Int64$$LPfrost$core$Frost$sort$T$Cfrost$core$Frost$sort$T$RP$EQ$AM$GT$LPfrost$core$Bit$RP(frost$collections$List* p_a, frost$core$Int64 p_left, frost$core$Int64 p_right, frost$core$MutableMethod* p_greater);
void frost$core$Frost$cleanup(frost$core$Frost* self);

