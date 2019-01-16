#pragma once
#include "frost_c.h"
#include "File_types.h"
typedef struct frost$io$File frost$io$File;
typedef struct frost$core$String frost$core$String;
typedef struct frost$collections$Iterator frost$collections$Iterator;
#include "frost/core/Bit_types.h"
typedef struct frost$core$Maybe frost$core$Maybe;
typedef struct frost$collections$ListView frost$collections$ListView;
typedef struct frost$io$InputStream frost$io$InputStream;
typedef struct frost$io$OutputStream frost$io$OutputStream;
typedef struct frost$collections$Array frost$collections$Array;
typedef struct frost$core$Error frost$core$Error;
#include "frost/core/Int64_types.h"

void frost$io$File$init$frost$core$String(frost$io$File* self, frost$core$String* p_path);
frost$io$File* frost$io$File$resolve$frost$core$String$R$frost$io$File(frost$io$File* self, frost$core$String* p_path);
frost$collections$Iterator* frost$io$File$lines$R$frost$collections$Iterator$LTfrost$core$String$GT(frost$io$File* self);
frost$core$Bit frost$io$File$get_isAbsolute$R$frost$core$Bit(frost$io$File* self);
frost$core$Maybe* frost$io$File$absolute$R$frost$core$Maybe$LTfrost$io$File$GT(frost$io$File* self);
frost$core$String* frost$io$File$normalize$frost$core$String$R$frost$core$String$Q(frost$io$File* self, frost$core$String* p_path);
frost$io$File* frost$io$File$get_parent$R$frost$io$File$Q(frost$io$File* self);
frost$core$String* frost$io$File$get_name$R$frost$core$String(frost$io$File* self);
frost$core$String* frost$io$File$get_simpleName$R$frost$core$String(frost$io$File* self);
frost$io$File* frost$io$File$changeExtension$frost$core$String$R$frost$io$File(frost$io$File* self, frost$core$String* p_ext);
void frost$io$File$exists$R$frost$core$Bit(frost$core$Bit* result, frost$io$File* self);
void frost$io$File$isDirectory$R$frost$core$Bit(frost$core$Bit* result, frost$io$File* self);
frost$collections$ListView* frost$io$File$list$R$frost$collections$ListView$LTfrost$io$File$GT(frost$io$File* self);
void frost$io$File$createDirectory(frost$io$File* self);
void frost$io$File$createDirectories(frost$io$File* self);
frost$io$InputStream* frost$io$File$openInputStream$R$frost$io$InputStream(frost$io$File* self);
frost$io$OutputStream* frost$io$File$openOutputStream$R$frost$io$OutputStream(frost$io$File* self);
frost$io$OutputStream* frost$io$File$openForAppend$R$frost$io$OutputStream(frost$io$File* self);
frost$core$String* frost$io$File$readFully$R$frost$core$String(frost$io$File* self);
frost$collections$Array* frost$io$File$readFully$R$frost$collections$Array$LTfrost$core$UInt8$GT(frost$io$File* self);
void frost$io$File$write$frost$core$String(frost$io$File* self, frost$core$String* p_contents);
frost$core$Error* frost$io$File$rename$frost$io$File$R$frost$core$Error$Q(frost$io$File* self, frost$io$File* p_path);
frost$core$Error* frost$io$File$delete$R$frost$core$Error$Q(frost$io$File* self);
frost$core$Bit frost$io$File$$EQ$frost$io$File$R$frost$core$Bit(frost$io$File* self, frost$io$File* p_other);
frost$core$Int64 frost$io$File$get_hash$R$frost$core$Int64(frost$io$File* self);
frost$core$String* frost$io$File$convert$R$frost$core$String(frost$io$File* self);
void frost$io$File$cleanup(frost$io$File* self);

