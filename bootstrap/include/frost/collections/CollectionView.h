#pragma once
#include "frost_c.h"
#include "CollectionView_types.h"
#include "frost/core/Int_types.h"
typedef struct frost$collections$CollectionView frost$collections$CollectionView;
typedef struct frost$core$Object frost$core$Object;
typedef struct frost$core$String frost$core$String;
typedef struct frost$core$MutableMethod frost$core$MutableMethod;
typedef struct frost$collections$Array frost$collections$Array;

frost$core$Int frost$collections$CollectionView$get_count$R$frost$core$Int(void* rawSelf);
frost$core$Object* frost$collections$CollectionView$get_first$R$frost$collections$CollectionView$T(void* rawSelf);
frost$core$String* frost$collections$CollectionView$join$R$frost$core$String(void* rawSelf);
frost$core$String* frost$collections$CollectionView$join$frost$core$String$R$frost$core$String(void* rawSelf, frost$core$String* p_separator);
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* p_f);
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* p_f);
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* p_f, frost$core$Object* p_start);
frost$core$Object* frost$collections$CollectionView$fold$$LPfrost$collections$CollectionView$T$Cfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$T$RP$frost$collections$CollectionView$T$R$frost$collections$CollectionView$T(void* rawSelf, frost$core$MutableMethod* p_f, frost$core$Object* p_start);
void frost$collections$CollectionView$apply$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LP$RP(void* rawSelf, frost$core$MutableMethod* p_m);
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(void* rawSelf, frost$core$MutableMethod* p_f);
frost$collections$Array* frost$collections$CollectionView$map$$LPfrost$collections$CollectionView$T$RP$EQ$AM$GT$LPfrost$collections$CollectionView$map$U$RP$R$frost$collections$Array$LTfrost$collections$CollectionView$map$U$GT(void* rawSelf, frost$core$MutableMethod* p_f);

