#pragma once
#include "frost_c.h"
#include "MergeSort_types.h"
typedef struct frost$collections$List frost$collections$List;
#include "frost/core/Int_types.h"
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$MergeSort frost$collections$MergeSort;

void frost$collections$MergeSort$insertionSort$frost$collections$List$LTfrost$collections$MergeSort$insertionSort$T$GT$frost$core$Int$frost$core$Int$$LPfrost$collections$MergeSort$insertionSort$T$Cfrost$collections$MergeSort$insertionSort$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* p_a, frost$core$Int p_left, frost$core$Int p_right, frost$core$MutableMethod* p_greater);
void frost$collections$MergeSort$merge$frost$collections$List$LTfrost$collections$MergeSort$merge$T$GT$frost$core$Int$frost$core$Int$frost$core$Int$$LPfrost$collections$MergeSort$merge$T$Cfrost$collections$MergeSort$merge$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* p_a, frost$core$Int p_start, frost$core$Int p_middle, frost$core$Int p_end, frost$core$MutableMethod* p_greater);
void frost$collections$MergeSort$sort$frost$collections$List$LTfrost$collections$MergeSort$sort$T$GT$$LPfrost$collections$MergeSort$sort$T$Cfrost$collections$MergeSort$sort$T$RP$EQ$GT$LPfrost$core$Bit$RP(frost$collections$List* p_a, frost$core$MutableMethod* p_greater);
void frost$collections$MergeSort$init(frost$collections$MergeSort* self);
void frost$collections$MergeSort$cleanup(frost$collections$MergeSort* self);

