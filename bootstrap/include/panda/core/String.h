#pragma once
#include "panda_c.h"
#define PANDA_TYPESONLY
#undef PANDA_TYPESONLY
typedef struct panda$core$Class panda$core$Class;
#include "panda/core/Int32.h"
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
#include "panda/core/String.h"
typedef struct panda$core$String panda$core$String;

typedef struct panda$core$String {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Char8* data;
    panda$core$Int64 _length;
} panda$core$String;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[35]; } panda$core$String$class_type;
extern panda$core$String$class_type panda$core$String$class;
typedef struct panda$core$String$Index {
    panda$core$Int64 value;
} panda$core$String$Index;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$String$Index$class_type;
extern panda$core$String$Index$class_type panda$core$String$Index$class;
typedef struct panda$core$String$Index$wrapper {
    panda$core$Class* cl;
    int32_t refCount;
    panda$core$String$Index value;
} panda$core$String$Index$wrapper;
typedef struct panda$core$String$Index$nullable {
    panda$core$String$Index value;
    bool nonnull;
} panda$core$String$Index$nullable;
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[2]; } panda$core$String$Index$wrapperclass_type;
extern panda$core$String$Index$wrapperclass_type panda$core$String$Index$wrapperclass;
panda$core$String$Index$wrapper* wrap_panda$core$String$Index(panda$core$String$Index self);
typedef struct panda$core$String$UTF8List {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$String* str;
} panda$core$String$UTF8List;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[5]; } panda$core$String$UTF8List$class_type;
extern panda$core$String$UTF8List$class_type panda$core$String$UTF8List$class;
typedef struct panda$core$String$UTF8Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 index;
    panda$core$String* str;
} panda$core$String$UTF8Iterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$UTF8Iterator$class_type;
extern panda$core$String$UTF8Iterator$class_type panda$core$String$UTF8Iterator$class;
typedef struct panda$core$String$UTF16Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 index;
    panda$core$String* str;
} panda$core$String$UTF16Iterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$UTF16Iterator$class_type;
extern panda$core$String$UTF16Iterator$class_type panda$core$String$UTF16Iterator$class;
typedef struct panda$core$String$UTF32Iterator {
    panda$core$Class* $class;
    panda$core$Int32 refCount;
    panda$core$Int64 index;
    panda$core$String* str;
} panda$core$String$UTF32Iterator;
#define PANDA_TYPESONLY
#include "panda/core/Class.h"
#undef PANDA_TYPESONLY
typedef struct { panda$core$Class* cl; int32_t refCount; panda$core$Class* super; ITable* itable; void* vtable[4]; } panda$core$String$UTF32Iterator$class_type;
extern panda$core$String$UTF32Iterator$class_type panda$core$String$UTF32Iterator$class;

#ifndef PANDA_TYPESONLY
typedef struct panda$core$String panda$core$String;
#include "panda/core/Char8.h"
#include "panda/core/Int64.h"
typedef struct panda$collections$ListView panda$collections$ListView;
typedef struct panda$collections$Iterator panda$collections$Iterator;
#include "panda/core/Bit.h"
typedef struct panda$core$Object panda$core$Object;
#include "panda/core/Char32.h"
#include "panda/core/String.h"
#include "panda/core/Range.h"
typedef struct panda$collections$Array panda$collections$Array;
#include "panda/core/UInt64.h"
typedef struct panda$core$String$UTF8List panda$core$String$UTF8List;
typedef struct panda$core$String$UTF8Iterator panda$core$String$UTF8Iterator;
typedef struct panda$core$String$UTF16Iterator panda$core$String$UTF16Iterator;
#include "panda/core/Char16.h"
typedef struct panda$core$String$UTF32Iterator panda$core$String$UTF32Iterator;

void panda$core$String$init$panda$unsafe$Pointer$LTpanda$core$Char8$GT$panda$core$Int64(panda$core$String* self, panda$core$Char8* p_data, panda$core$Int64 p_length);
void panda$core$String$init$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self, panda$collections$ListView* p_chars);
panda$core$String* panda$core$String$convert$R$panda$core$String(panda$core$String* self);
void panda$core$String$cleanup(panda$core$String* self);
panda$collections$ListView* panda$core$String$utf8$R$panda$collections$ListView$LTpanda$core$Char8$GT(panda$core$String* self);
panda$collections$Iterator* panda$core$String$utf16$R$panda$collections$Iterator$LTpanda$core$Char16$GT(panda$core$String* self);
panda$collections$Iterator* panda$core$String$utf32$R$panda$collections$Iterator$LTpanda$core$Char32$GT(panda$core$String* self);
panda$core$Int64 panda$core$String$length$R$panda$core$Int64(panda$core$String* self);
panda$core$Bit panda$core$String$startsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other);
panda$core$Bit panda$core$String$endsWith$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other);
panda$core$String* panda$core$String$trimmed$R$panda$core$String(panda$core$String* self);
panda$core$String* panda$core$String$$ADD$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_other);
panda$core$String* panda$core$String$$ADD$panda$core$Object$R$panda$core$String(panda$core$String* self, panda$core$Object* p_other);
panda$core$String* panda$core$String$$MUL$panda$core$Int64$R$panda$core$String(panda$core$String* self, panda$core$Int64 p_count);
panda$core$String* panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(panda$core$Object* p_o, panda$core$String* p_s);
panda$core$Bit panda$core$String$$EQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other);
panda$core$Bit panda$core$String$$NEQ$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_other);
panda$core$Char32 panda$core$String$$IDX$panda$core$String$Index$R$panda$core$Char32(panda$core$String* self, panda$core$String$Index p_index);
panda$core$Char32 panda$core$String$$IDX$panda$core$Int64$R$panda$core$Char32(panda$core$String* self, panda$core$Int64 p_index);
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$String$Index$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range p_r);
panda$core$String* panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String(panda$core$String* self, panda$core$Range p_r);
panda$core$Bit panda$core$String$contains$panda$core$Char8$R$panda$core$Bit(panda$core$String* self, panda$core$Char8 p_c);
panda$core$Bit panda$core$String$contains$panda$core$String$R$panda$core$Bit(panda$core$String* self, panda$core$String* p_s);
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s);
panda$core$String$Index$nullable panda$core$String$indexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start);
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s);
panda$core$String$Index$nullable panda$core$String$lastIndexOf$panda$core$String$panda$core$String$Index$R$panda$core$String$Index$Q(panda$core$String* self, panda$core$String* p_s, panda$core$String$Index p_start);
panda$core$String* panda$core$String$replace$panda$core$String$panda$core$String$R$panda$core$String(panda$core$String* self, panda$core$String* p_search, panda$core$String* p_replacement);
panda$core$String$Index panda$core$String$start$R$panda$core$String$Index(panda$core$String* self);
panda$core$String$Index panda$core$String$end$R$panda$core$String$Index(panda$core$String* self);
panda$core$String$Index panda$core$String$next$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i);
panda$core$String$Index panda$core$String$previous$panda$core$String$Index$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_i);
panda$core$String$Index panda$core$String$offset$panda$core$String$Index$panda$core$Int64$R$panda$core$String$Index(panda$core$String* self, panda$core$String$Index p_index, panda$core$Int64 p_offset);
panda$collections$Array* panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter);
panda$collections$Array* panda$core$String$split$panda$core$String$panda$core$Int64$R$panda$collections$Array$LTpanda$core$String$GT(panda$core$String* self, panda$core$String* p_delimiter, panda$core$Int64 p_maxResults);
panda$core$Int64$nullable panda$core$String$convert$R$panda$core$Int64$Q(panda$core$String* self);
panda$core$UInt64$nullable panda$core$String$convert$R$panda$core$UInt64$Q(panda$core$String* self);
panda$core$Int64 panda$core$String$hash$R$panda$core$Int64(panda$core$String* self);
void panda$core$String$Index$init$panda$core$Int64(panda$core$String$Index* self, panda$core$Int64 p_value);
panda$core$Bit panda$core$String$Index$$EQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Bit panda$core$String$Index$$NEQ$panda$core$String$Index$R$panda$core$Bit(panda$core$String$Index self, panda$core$String$Index p_other);
panda$core$Int64 panda$core$String$Index$hash$R$panda$core$Int64(panda$core$String$Index self);
void panda$core$String$UTF8List$init$panda$core$String(panda$core$String$UTF8List* self, panda$core$String* p_str);
panda$core$Char8 panda$core$String$UTF8List$$IDX$panda$core$Int64$R$panda$core$Char8(panda$core$String$UTF8List* self, panda$core$Int64 p_index);
panda$core$Int64 panda$core$String$UTF8List$get_count$R$panda$core$Int64(panda$core$String$UTF8List* self);
panda$collections$Iterator* panda$core$String$UTF8List$iterator$R$panda$collections$Iterator$LTpanda$core$Char8$GT(panda$core$String$UTF8List* self);
void panda$core$String$UTF8Iterator$init$panda$core$String(panda$core$String$UTF8Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF8Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF8Iterator* self);
panda$core$Char8 panda$core$String$UTF8Iterator$next$R$panda$core$Char8(panda$core$String$UTF8Iterator* self);
void panda$core$String$UTF16Iterator$init$panda$core$String(panda$core$String$UTF16Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF16Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF16Iterator* self);
panda$core$Char16 panda$core$String$UTF16Iterator$next$R$panda$core$Char16(panda$core$String$UTF16Iterator* self);
void panda$core$String$UTF32Iterator$init$panda$core$String(panda$core$String$UTF32Iterator* self, panda$core$String* p_str);
panda$core$Bit panda$core$String$UTF32Iterator$get_done$R$panda$core$Bit(panda$core$String$UTF32Iterator* self);
panda$core$Char32 panda$core$String$UTF32Iterator$next$R$panda$core$Char32(panda$core$String$UTF32Iterator* self);

#endif
