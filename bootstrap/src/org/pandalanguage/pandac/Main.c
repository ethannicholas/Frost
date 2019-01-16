#include "org/pandalanguage/pandac/Main.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Bit.h"
#include "panda/io/File.h"
#include "org/pandalanguage/pandac/Config.h"
#include "panda/core/Panda.h"
#include "panda/collections/Array.h"
#include "panda/core/System/Process.h"
#include "panda/core/Int64.h"
#include "panda/collections/ListView.h"
#include "panda/core/System.h"
#include "panda/io/Console.h"
#include "panda/io/OutputStream.h"
#include "panda/io/InputStream.h"
#include "panda/core/Error.h"
#include "panda/core/UInt8.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/core/Range.LTpanda/core/Int64.Q.GT.h"
#include "org/pandalanguage/pandac/Main/Arguments.h"
#include "org/pandalanguage/pandac/Main/Format.h"
#include "org/pandalanguage/pandac/CodeGenerator.h"
#include "org/pandalanguage/pandac/Compiler/Settings.h"
#include "panda/threads/MessageQueue.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Compiler/Error.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Equatable.h"
#include "org/pandalanguage/pandac/HTMLProcessor.h"
#include "org/pandalanguage/pandac/LLVMCodeGenerator.h"
#include "org/pandalanguage/pandac/HCodeGenerator.h"
#include "org/pandalanguage/pandac/CCodeGenerator.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "panda/core/UInt64.h"
#include "panda/core/Immutable.h"
#include "org/pandalanguage/pandac/Position.h"


static panda$core$String $s1;
org$pandalanguage$pandac$Main$class_type org$pandalanguage$pandac$Main$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { panda$core$Object$convert$R$panda$core$String, org$pandalanguage$pandac$Main$cleanup, org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File, org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream, org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT} };

typedef panda$core$String* (*$fn45)(panda$io$InputStream*);
typedef void (*$fn48)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn59)(panda$io$InputStream*);
typedef void (*$fn62)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn111)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn115)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn120)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn187)(panda$io$InputStream*);
typedef void (*$fn190)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn201)(panda$io$InputStream*);
typedef void (*$fn204)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn232)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn234)(panda$io$OutputStream*);
typedef void (*$fn244)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn246)(panda$io$OutputStream*);
typedef void (*$fn248)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn251)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn271)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$String* (*$fn277)(org$pandalanguage$pandac$Main$Arguments*);
typedef panda$core$Int64 (*$fn298)(panda$io$InputStream*, panda$io$OutputStream*);
typedef void (*$fn311)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn317)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn338)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn366)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn375)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn403)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn415)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn420)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef void (*$fn462)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$String* (*$fn472)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$String* (*$fn480)(org$pandalanguage$pandac$Main$Arguments*, panda$core$String*);
typedef panda$core$Int64 (*$fn517)(panda$collections$CollectionView*);
typedef void (*$fn524)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Int64 (*$fn538)(panda$collections$CollectionView*);
typedef void (*$fn576)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn599)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn604)(panda$io$OutputStream*, panda$core$String*);
typedef void (*$fn609)(panda$io$OutputStream*, panda$core$String*);
typedef panda$core$Bit (*$fn625)(panda$core$Equatable*, panda$core$Equatable*);
typedef void (*$fn650)(org$pandalanguage$pandac$HTMLProcessor*, panda$io$File*, panda$io$File*, panda$core$String*);
typedef void (*$fn663)(panda$io$OutputStream*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn739)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn743)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn748)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn756)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn760)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn765)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn775)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn779)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn784)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e", 29, -3248623696873689241, NULL };
static panda$core$String $s15 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s17 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s19 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x63", 2, 14845, NULL };
static panda$core$String $s24 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s26 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s41 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s54 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s55 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s67 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s68 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s93 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s96 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s97 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s99 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x6d", 3, 1500363, NULL };
static panda$core$String $s103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c\x70\x74\x68\x72\x65\x61\x64", 9, 1592669972389054298, NULL };
static panda$core$String $s106 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3b", 1, 160, NULL };
static panda$core$String $s132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4c", 2, 14822, NULL };
static panda$core$String $s141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x69\x62", 3, 2142712, NULL };
static panda$core$String $s144 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6c", 2, 14854, NULL };
static panda$core$String $s159 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6d\x36\x34", 4, 151541361, NULL };
static panda$core$String $s161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66\x50\x49\x43", 5, 15298732768, NULL };
static panda$core$String $s166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x67", 2, 14849, NULL };
static panda$core$String $s168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s182 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s197 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x79\x73\x74\x65\x6d\x2e\x50\x72\x6f\x63\x65\x73\x73\x27", 89, 5240529321666434131, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x55\x73\x61\x67\x65\x3a\x20", 7, 198661610585492, NULL };
static panda$core$String $s228 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x20\x5b\x6f\x70\x74\x69\x6f\x6e\x73\x5d\x20\x3c\x73\x6f\x75\x72\x63\x65\x73\x3e", 21, -8836882300516865962, NULL };
static panda$core$String $s236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x53\x6f\x75\x72\x63\x65\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65\x73\x20\x6d\x75\x73\x74\x20\x65\x6e\x64\x20\x69\x6e\x20\x27\x2e", 31, -7415590877428372366, NULL };
static panda$core$String $s242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2e", 2, 14186, NULL };
static panda$core$String $s249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4f\x70\x74\x69\x6f\x6e\x73\x3a", 8, 19418556808290907, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x20\x2d\x6f\x20\x3c\x70\x61\x74\x68\x3e\x20\x20\x20\x20\x6f\x75\x74\x70\x75\x74\x20\x70\x61\x74\x68", 26, 7995046615041556794, NULL };
static panda$core$String $s282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x66\x75\x7a\x7a", 6, 1539263687854, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x74\x6d\x70\x2f\x66\x75\x7a\x7a\x2e", 10, -2887356857266458003, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x6f", 2, 14857, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x6f\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -1954588545421109744, NULL };
static panda$core$String $s319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x66\x69\x6c\x65\x6e\x61\x6d\x65", 10, -4453682361287582429, NULL };
static panda$core$String $s325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x4f", 2, 14825, NULL };
static panda$core$String $s340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x4f\x27", 37, 7661197128079450357, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x53", 2, 14829, NULL };
static panda$core$String $s377 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33", 17, 4067655969961502935, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x49\x6e\x74\x36\x34\x27", 71, -5415451314470940391, NULL };
static panda$core$String $s404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x70\x65\x63\x74\x65\x64\x20\x61\x20\x6e\x75\x6d\x62\x65\x72\x20\x66\x72\x6f\x6d\x20\x30\x2d\x33\x20\x61\x66\x74\x65\x72\x20\x27\x2d\x53\x27", 37, 7661197128079450761, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x66", 2, 14848, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27\x2d\x66\x27\x20\x6d\x61\x79\x20\x6f\x6e\x6c\x79\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x20\x6f\x6e\x63\x65", 31, -7344290732081110281, NULL };
static panda$core$String $s422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x6e\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 16, -291047026475600626, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x78\x65", 3, 2072823, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f", 1, 212, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6c", 2, 21217, NULL };
static panda$core$String $s441 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68", 1, 205, NULL };
static panda$core$String $s446 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63", 1, 200, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x68\x74\x6d\x6c", 4, 212406138, NULL };
static panda$core$String $s458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x27", 27, 7296986389419177127, NULL };
static panda$core$String $s460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x27", 1, 140, NULL };
static panda$core$String $s466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x69", 2, 14851, NULL };
static panda$core$String $s474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68\x20\x74\x6f\x20\x61\x6e\x20\x69\x6d\x70\x6f\x72\x74\x20\x64\x69\x72\x65\x63\x74\x6f\x72\x79", 29, 3398752106607544789, NULL };
static panda$core$String $s476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74", 6, 1539275989143, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x20\x70\x61\x74\x68", 6, 2084446227059, NULL };
static panda$core$String $s486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x70\x61\x6e\x64\x61", 6, 1556740610063, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x72\x6f\x73\x74", 5, 21242859759, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f\x75\x73\x72\x2f\x62\x69\x6e\x2f\x63\x6c\x61\x6e\x67", 14, 5664749286632577346, NULL };
static panda$core$String $s525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x6f\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 24, -7743793040575712359, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x27", 111, 2761057013739884387, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6f", 2, 14958, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x68\x74\x6d\x6c", 5, 15405224684, NULL };
static panda$core$String $s577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x61\x20\x27\x2d\x6f\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x74\x6f\x20\x62\x65\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64", 52, -3885254762738542379, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e\x27", 133, 8642780602793403390, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x6d\x61\x74\x20\x27\x68\x74\x6d\x6c\x27\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x65\x78\x61\x63\x74\x6c\x79\x20\x6f\x6e\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65", 45, -841921153732773227, NULL };
static panda$core$String $s610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x75\x6c\x74\x69\x70\x6c\x65\x20\x69\x6e\x70\x75\x74\x20\x66\x69\x6c\x65\x73\x20\x73\x70\x65\x63\x69\x66\x69\x65\x64\x2c\x20\x6d\x75\x73\x74\x20\x75\x73\x65\x20\x27\x2d\x6f\x27\x20\x74\x6f\x20\x73\x70\x65\x63\x69\x66\x79\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x69\x6c\x65", 68, 1045441728646282247, NULL };
static panda$core$String $s616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x45\x71\x75\x61\x74\x61\x62\x6c\x65\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3e\x27", 133, 8642780602793403390, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x27", 73, -4610689946929160587, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2d\x72\x6f\x6f\x74\x20\x72\x65\x71\x75\x69\x72\x65\x73\x20\x27\x68\x74\x6d\x6c\x27\x20\x6f\x75\x74\x70\x75\x74\x20\x66\x6f\x72\x6d\x61\x74", 36, 4739207170017691060, NULL };
static panda$core$String $s670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x27", 111, 2761057013739884387, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20\x65\x72\x72\x6f\x72\x3a\x20", 9, 1725281418740475535, NULL };
static panda$core$String $s835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x61\x69\x6e\x2e\x46\x6f\x72\x6d\x61\x74\x27", 111, 2761057013739884387, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x6c\x6c", 3, 1510563, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x61\x69\x6e\x2e\x66\x72\x6f\x73\x74", 10, -7176460585918517682, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x69\x6f\x2e\x46\x69\x6c\x65\x27", 65, -5184819833024418747, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x31\x20\x65\x72\x72\x6f\x72", 7, 159574974535236, NULL };
static panda$core$String $s918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x65\x72\x72\x6f\x72\x73", 7, 142255681664502, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x65\x72\x72\x6f\x72", 5, 21138829555, NULL };

void org$pandalanguage$pandac$Main$init(org$pandalanguage$pandac$Main* param0) {

// line 24
panda$core$Bit $tmp2 = panda$core$Bit$init$builtin_bit(true);
panda$core$Bit* $tmp3 = &param0->debug;
*$tmp3 = $tmp2;
// line 27
panda$io$File* $tmp4 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp5 = org$pandalanguage$pandac$Config$srcDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp4, $tmp5);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
panda$io$File** $tmp6 = &param0->srcDir;
panda$io$File* $tmp7 = *$tmp6;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp7));
panda$io$File** $tmp8 = &param0->srcDir;
*$tmp8 = $tmp4;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp5));
// unreffing REF($6:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp4));
// unreffing REF($5:panda.io.File)
return;

}
panda$io$File* org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$core$System$Process* local1 = NULL;
panda$core$Int64 local2;
// line 64
panda$collections$Array* $tmp9 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp9);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
panda$collections$Array* $tmp10 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp10));
*(&local0) = $tmp9;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp9));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 65
panda$collections$Array* $tmp11 = *(&local0);
panda$core$String** $tmp12 = &param1->path;
panda$core$String* $tmp13 = *$tmp12;
panda$collections$Array$add$panda$collections$Array$T($tmp11, ((panda$core$Object*) $tmp13));
// line 66
panda$collections$Array* $tmp14 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp14, ((panda$core$Object*) &$s15));
// line 67
panda$collections$Array* $tmp16 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp16, ((panda$core$Object*) &$s17));
// line 68
panda$collections$Array* $tmp18 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp18, ((panda$core$Object*) &$s19));
// line 69
panda$core$Bit* $tmp20 = &param0->debug;
panda$core$Bit $tmp21 = *$tmp20;
bool $tmp22 = $tmp21.value;
if ($tmp22) goto block1; else goto block2;
block1:;
// line 70
panda$collections$Array* $tmp23 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp23, ((panda$core$Object*) &$s24));
goto block2;
block2:;
// line 72
panda$collections$Array* $tmp25 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp25, ((panda$core$Object*) &$s26));
// line 73
panda$collections$Array* $tmp27 = *(&local0);
panda$core$String** $tmp28 = &param2->path;
panda$core$String* $tmp29 = *$tmp28;
panda$collections$Array$add$panda$collections$Array$T($tmp27, ((panda$core$Object*) $tmp29));
// line 74
panda$io$File** $tmp30 = &param0->clang;
panda$io$File* $tmp31 = *$tmp30;
panda$collections$Array* $tmp32 = *(&local0);
panda$core$System$Process* $tmp33 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp31, ((panda$collections$ListView*) $tmp32));
*(&local1) = ((panda$core$System$Process*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
panda$core$System$Process* $tmp34 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp34));
*(&local1) = $tmp33;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp33));
// unreffing REF($64:panda.core.System.Process?)
// line 75
panda$io$OutputStream* $tmp35 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp36 = *(&local1);
panda$core$Bit $tmp37 = panda$core$Bit$init$builtin_bit($tmp36 != NULL);
bool $tmp38 = $tmp37.value;
if ($tmp38) goto block3; else goto block4;
block4:;
panda$core$Int64 $tmp39 = (panda$core$Int64) {75};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s40, $tmp39, &$s41);
abort(); // unreachable
block3:;
panda$io$InputStream** $tmp42 = &$tmp36->output;
panda$io$InputStream* $tmp43 = *$tmp42;
$fn45 $tmp44 = ($fn45) $tmp43->$class->vtable[14];
panda$core$String* $tmp46 = $tmp44($tmp43);
$fn48 $tmp47 = ($fn48) $tmp35->$class->vtable[17];
$tmp47($tmp35, $tmp46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($89:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp35));
// unreffing REF($76:panda.io.OutputStream)
// line 76
panda$io$OutputStream* $tmp49 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp50 = *(&local1);
panda$core$Bit $tmp51 = panda$core$Bit$init$builtin_bit($tmp50 != NULL);
bool $tmp52 = $tmp51.value;
if ($tmp52) goto block5; else goto block6;
block6:;
panda$core$Int64 $tmp53 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s54, $tmp53, &$s55);
abort(); // unreachable
block5:;
panda$io$InputStream** $tmp56 = &$tmp50->error;
panda$io$InputStream* $tmp57 = *$tmp56;
$fn59 $tmp58 = ($fn59) $tmp57->$class->vtable[14];
panda$core$String* $tmp60 = $tmp58($tmp57);
$fn62 $tmp61 = ($fn62) $tmp49->$class->vtable[17];
$tmp61($tmp49, $tmp60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp60));
// unreffing REF($112:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp49));
// unreffing REF($99:panda.io.OutputStream)
// line 77
panda$core$System$Process* $tmp63 = *(&local1);
panda$core$Bit $tmp64 = panda$core$Bit$init$builtin_bit($tmp63 != NULL);
bool $tmp65 = $tmp64.value;
if ($tmp65) goto block7; else goto block8;
block8:;
panda$core$Int64 $tmp66 = (panda$core$Int64) {77};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s67, $tmp66, &$s68);
abort(); // unreachable
block7:;
panda$core$Int64 $tmp69;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp69, $tmp63);
*(&local2) = $tmp69;
// line 78
panda$core$Bit $tmp70 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block9; else goto block10;
block9:;
// line 79
panda$core$Error* $tmp72 = panda$io$File$delete$R$panda$core$Error$Q(param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($138:panda.core.Error?)
goto block10;
block10:;
// line 81
panda$core$Int64 $tmp73 = *(&local2);
panda$core$Int64 $tmp74 = (panda$core$Int64) {0};
int64_t $tmp75 = $tmp73.value;
int64_t $tmp76 = $tmp74.value;
bool $tmp77 = $tmp75 != $tmp76;
panda$core$Bit $tmp78 = (panda$core$Bit) {$tmp77};
bool $tmp79 = $tmp78.value;
if ($tmp79) goto block11; else goto block12;
block11:;
// line 82
panda$core$UInt8 $tmp80 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp80);
goto block12;
block12:;
// line 84
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp81 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp81));
// unreffing p
*(&local1) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp82 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp82));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
return param2;

}
panda$io$File* org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(org$pandalanguage$pandac$Main* param0, panda$io$File* param1, panda$io$File* param2, panda$core$Bit param3) {

panda$collections$Array* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$core$String* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$String* local4 = NULL;
panda$core$System$Process* local5 = NULL;
panda$core$Int64 local6;
// line 88
panda$collections$Array* $tmp83 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp83);
*(&local0) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
panda$collections$Array* $tmp84 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp84));
*(&local0) = $tmp83;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp83));
// unreffing REF($1:panda.collections.Array<panda.core.String>)
// line 89
panda$collections$Array* $tmp85 = *(&local0);
panda$core$String** $tmp86 = &param1->path;
panda$core$String* $tmp87 = *$tmp86;
panda$collections$Array$add$panda$collections$Array$T($tmp85, ((panda$core$Object*) $tmp87));
// line 90
panda$collections$Array* $tmp88 = *(&local0);
panda$core$String* $tmp89 = org$pandalanguage$pandac$Config$libDir$R$panda$core$String();
panda$core$String* $tmp90 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s91, $tmp89);
panda$core$String* $tmp92 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp90, &$s93);
panda$collections$Array$add$panda$collections$Array$T($tmp88, ((panda$core$Object*) $tmp92));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp92));
// unreffing REF($26:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp90));
// unreffing REF($25:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp89));
// unreffing REF($24:panda.core.String)
// line 91
panda$collections$Array* $tmp94 = *(&local0);
panda$core$String* $tmp95 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s96, &$s97);
panda$core$String* $tmp98 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp95, &$s99);
panda$collections$Array$add$panda$collections$Array$T($tmp94, ((panda$core$Object*) $tmp98));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp98));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp95));
// unreffing REF($41:panda.core.String)
// line 92
panda$collections$Array* $tmp100 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp100, ((panda$core$Object*) &$s101));
// line 93
panda$collections$Array* $tmp102 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp102, ((panda$core$Object*) &$s103));
// line 94
panda$core$String* $tmp104 = org$pandalanguage$pandac$Config$icuLibraries$R$panda$core$String();
panda$collections$Array* $tmp105 = panda$core$String$split$panda$core$String$R$panda$collections$Array$LTpanda$core$String$GT($tmp104, &$s106);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
panda$collections$Array* $tmp107 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp107));
*(&local1) = $tmp105;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp105));
// unreffing REF($63:panda.collections.Array<panda.core.String>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp104));
// unreffing REF($62:panda.core.String)
// line 95
panda$collections$Array* $tmp108 = *(&local1);
ITable* $tmp109 = ((panda$collections$Iterable*) $tmp108)->$class->itable;
while ($tmp109->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp109 = $tmp109->next;
}
$fn111 $tmp110 = $tmp109->methods[0];
panda$collections$Iterator* $tmp112 = $tmp110(((panda$collections$Iterable*) $tmp108));
goto block1;
block1:;
ITable* $tmp113 = $tmp112->$class->itable;
while ($tmp113->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[0];
panda$core$Bit $tmp116 = $tmp114($tmp112);
bool $tmp117 = $tmp116.value;
if ($tmp117) goto block3; else goto block2;
block2:;
*(&local2) = ((panda$core$String*) NULL);
ITable* $tmp118 = $tmp112->$class->itable;
while ($tmp118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp118 = $tmp118->next;
}
$fn120 $tmp119 = $tmp118->methods[1];
panda$core$Object* $tmp121 = $tmp119($tmp112);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) $tmp121)));
panda$core$String* $tmp122 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp122));
*(&local2) = ((panda$core$String*) $tmp121);
// line 96
panda$io$File* $tmp123 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp124 = *(&local2);
panda$io$File$init$panda$core$String($tmp123, $tmp124);
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
panda$io$File* $tmp125 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp125));
*(&local3) = $tmp123;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp123));
// unreffing REF($102:panda.io.File)
// line 97
panda$collections$Array* $tmp126 = *(&local0);
panda$io$File* $tmp127 = *(&local3);
panda$io$File* $tmp128 = panda$io$File$get_parent$R$panda$io$File$Q($tmp127);
panda$core$Bit $tmp129 = panda$core$Bit$init$builtin_bit($tmp128 != NULL);
bool $tmp130 = $tmp129.value;
if ($tmp130) goto block4; else goto block5;
block5:;
panda$core$Int64 $tmp131 = (panda$core$Int64) {97};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s132, $tmp131, &$s133);
abort(); // unreachable
block4:;
panda$core$String* $tmp134 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s135, ((panda$core$Object*) $tmp128));
panda$collections$Array$add$panda$collections$Array$T($tmp126, ((panda$core$Object*) $tmp134));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp134));
// unreffing REF($129:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp128));
// unreffing REF($119:panda.io.File?)
// line 98
panda$io$File* $tmp136 = *(&local3);
panda$core$String* $tmp137 = panda$io$File$get_simpleName$R$panda$core$String($tmp136);
*(&local4) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
panda$core$String* $tmp138 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp138));
*(&local4) = $tmp137;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp137));
// unreffing REF($140:panda.core.String)
// line 99
panda$core$String* $tmp139 = *(&local4);
panda$core$Bit $tmp140 = panda$core$String$startsWith$panda$core$String$R$panda$core$Bit($tmp139, &$s141);
bool $tmp142 = $tmp140.value;
if ($tmp142) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp143 = (panda$core$Int64) {99};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s144, $tmp143);
abort(); // unreachable
block6:;
// line 100
panda$core$String* $tmp145 = *(&local4);
panda$core$Int64 $tmp146 = (panda$core$Int64) {3};
panda$core$Bit $tmp147 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$Q$GT $tmp148 = panda$core$Range$LTpanda$core$Int64$Q$GT$init$panda$core$Int64$Q$panda$core$Int64$Q$panda$core$Bit(((panda$core$Int64$nullable) { $tmp146, true }), ((panda$core$Int64$nullable) { .nonnull = false }), $tmp147);
panda$core$String* $tmp149 = panda$core$String$$IDX$panda$core$Range$LTpanda$core$Int64$Q$GT$R$panda$core$String($tmp145, $tmp148);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
panda$core$String* $tmp150 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp150));
*(&local4) = $tmp149;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp149));
// unreffing REF($165:panda.core.String)
// line 101
panda$collections$Array* $tmp151 = *(&local0);
panda$core$String* $tmp152 = *(&local4);
panda$core$String* $tmp153 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s154, $tmp152);
panda$collections$Array$add$panda$collections$Array$T($tmp151, ((panda$core$Object*) $tmp153));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp153));
// unreffing REF($179:panda.core.String)
panda$core$String* $tmp155 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp155));
// unreffing simpleName
*(&local4) = ((panda$core$String*) NULL);
panda$io$File* $tmp156 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp156));
// unreffing libFile
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$unref$panda$core$Object$Q($tmp121);
// unreffing REF($93:panda.collections.Iterator.T)
panda$core$String* $tmp157 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp157));
// unreffing lib
*(&local2) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp112));
// unreffing REF($82:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 103
panda$collections$Array* $tmp158 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp158, ((panda$core$Object*) &$s159));
// line 104
panda$collections$Array* $tmp160 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp160, ((panda$core$Object*) &$s161));
// line 105
panda$core$Bit* $tmp162 = &param0->debug;
panda$core$Bit $tmp163 = *$tmp162;
bool $tmp164 = $tmp163.value;
if ($tmp164) goto block8; else goto block9;
block8:;
// line 106
panda$collections$Array* $tmp165 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp165, ((panda$core$Object*) &$s166));
goto block9;
block9:;
// line 108
panda$collections$Array* $tmp167 = *(&local0);
panda$collections$Array$add$panda$collections$Array$T($tmp167, ((panda$core$Object*) &$s168));
// line 109
panda$collections$Array* $tmp169 = *(&local0);
panda$core$String** $tmp170 = &param2->path;
panda$core$String* $tmp171 = *$tmp170;
panda$collections$Array$add$panda$collections$Array$T($tmp169, ((panda$core$Object*) $tmp171));
// line 110
panda$io$File** $tmp172 = &param0->clang;
panda$io$File* $tmp173 = *$tmp172;
panda$collections$Array* $tmp174 = *(&local0);
panda$core$System$Process* $tmp175 = panda$core$System$exec$panda$io$File$panda$collections$ListView$LTpanda$core$String$GT$R$panda$core$System$Process$Q($tmp173, ((panda$collections$ListView*) $tmp174));
*(&local5) = ((panda$core$System$Process*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
panda$core$System$Process* $tmp176 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp176));
*(&local5) = $tmp175;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp175));
// unreffing REF($245:panda.core.System.Process?)
// line 111
panda$io$OutputStream* $tmp177 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp178 = *(&local5);
panda$core$Bit $tmp179 = panda$core$Bit$init$builtin_bit($tmp178 != NULL);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block10; else goto block11;
block11:;
panda$core$Int64 $tmp181 = (panda$core$Int64) {111};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s182, $tmp181, &$s183);
abort(); // unreachable
block10:;
panda$io$InputStream** $tmp184 = &$tmp178->output;
panda$io$InputStream* $tmp185 = *$tmp184;
$fn187 $tmp186 = ($fn187) $tmp185->$class->vtable[14];
panda$core$String* $tmp188 = $tmp186($tmp185);
$fn190 $tmp189 = ($fn190) $tmp177->$class->vtable[17];
$tmp189($tmp177, $tmp188);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp188));
// unreffing REF($270:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp177));
// unreffing REF($257:panda.io.OutputStream)
// line 112
panda$io$OutputStream* $tmp191 = panda$io$Console$errorStream$R$panda$io$OutputStream();
panda$core$System$Process* $tmp192 = *(&local5);
panda$core$Bit $tmp193 = panda$core$Bit$init$builtin_bit($tmp192 != NULL);
bool $tmp194 = $tmp193.value;
if ($tmp194) goto block12; else goto block13;
block13:;
panda$core$Int64 $tmp195 = (panda$core$Int64) {112};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s196, $tmp195, &$s197);
abort(); // unreachable
block12:;
panda$io$InputStream** $tmp198 = &$tmp192->error;
panda$io$InputStream* $tmp199 = *$tmp198;
$fn201 $tmp200 = ($fn201) $tmp199->$class->vtable[14];
panda$core$String* $tmp202 = $tmp200($tmp199);
$fn204 $tmp203 = ($fn204) $tmp191->$class->vtable[17];
$tmp203($tmp191, $tmp202);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp202));
// unreffing REF($293:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp191));
// unreffing REF($280:panda.io.OutputStream)
// line 113
panda$core$System$Process* $tmp205 = *(&local5);
panda$core$Bit $tmp206 = panda$core$Bit$init$builtin_bit($tmp205 != NULL);
bool $tmp207 = $tmp206.value;
if ($tmp207) goto block14; else goto block15;
block15:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {113};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s209, $tmp208, &$s210);
abort(); // unreachable
block14:;
panda$core$Int64 $tmp211;
panda$core$System$Process$waitFor$R$panda$core$Int64(&$tmp211, $tmp205);
*(&local6) = $tmp211;
// line 114
panda$core$Bit $tmp212 = panda$core$Bit$$NOT$R$panda$core$Bit(param3);
bool $tmp213 = $tmp212.value;
if ($tmp213) goto block16; else goto block17;
block16:;
// line 115
panda$core$Error* $tmp214 = panda$io$File$delete$R$panda$core$Error$Q(param1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($319:panda.core.Error?)
goto block17;
block17:;
// line 117
panda$core$Int64 $tmp215 = *(&local6);
panda$core$Int64 $tmp216 = (panda$core$Int64) {0};
int64_t $tmp217 = $tmp215.value;
int64_t $tmp218 = $tmp216.value;
bool $tmp219 = $tmp217 != $tmp218;
panda$core$Bit $tmp220 = (panda$core$Bit) {$tmp219};
bool $tmp221 = $tmp220.value;
if ($tmp221) goto block18; else goto block19;
block18:;
// line 118
panda$core$UInt8 $tmp222 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp222);
goto block19;
block19:;
// line 120
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$core$System$Process* $tmp223 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp223));
// unreffing p
*(&local5) = ((panda$core$System$Process*) NULL);
panda$collections$Array* $tmp224 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp224));
// unreffing icuLibs
*(&local1) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp225 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp225));
// unreffing args
*(&local0) = ((panda$collections$Array*) NULL);
return param2;

}
void org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(org$pandalanguage$pandac$Main* param0, panda$io$OutputStream* param1) {

// line 124
panda$core$String* $tmp226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s227, &$s228);
panda$core$String* $tmp229 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp226, &$s230);
$fn232 $tmp231 = ($fn232) param1->$class->vtable[19];
$tmp231(param1, $tmp229);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($2:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp226));
// unreffing REF($1:panda.core.String)
// line 125
$fn234 $tmp233 = ($fn234) param1->$class->vtable[21];
$tmp233(param1);
// line 126
panda$core$String* $tmp235 = panda$core$String$convert$R$panda$core$String(&$s236);
panda$core$String* $tmp237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp235, &$s238);
panda$core$String* $tmp239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s240, $tmp237);
panda$core$String* $tmp241 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp239, &$s242);
$fn244 $tmp243 = ($fn244) param1->$class->vtable[19];
$tmp243(param1, $tmp241);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp241));
// unreffing REF($18:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp239));
// unreffing REF($17:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp237));
// unreffing REF($16:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp235));
// unreffing REF($15:panda.core.String)
// line 127
$fn246 $tmp245 = ($fn246) param1->$class->vtable[21];
$tmp245(param1);
// line 128
$fn248 $tmp247 = ($fn248) param1->$class->vtable[19];
$tmp247(param1, &$s249);
// line 129
$fn251 $tmp250 = ($fn251) param1->$class->vtable[19];
$tmp250(param1, &$s252);
return;

}
void org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT(org$pandalanguage$pandac$Main* param0, panda$collections$ListView* param1) {

org$pandalanguage$pandac$Main$Arguments* local0 = NULL;
panda$collections$Array* local1 = NULL;
panda$collections$Array* local2 = NULL;
panda$io$File* local3 = NULL;
panda$core$Int64 local4;
panda$core$Int64 local5;
org$pandalanguage$pandac$Main$Format$nullable local6;
panda$core$String* local7 = NULL;
panda$core$Bit local8;
panda$io$OutputStream* local9 = NULL;
panda$core$String* local10 = NULL;
panda$io$File* local11 = NULL;
panda$core$String* local12 = NULL;
panda$core$Bit local13;
panda$core$String* local14 = NULL;
panda$core$Bit local15;
panda$core$String* local16 = NULL;
panda$core$Bit local17;
panda$io$File* local18 = NULL;
panda$core$String* local19 = NULL;
panda$core$Int64 local20;
org$pandalanguage$pandac$CodeGenerator* local21 = NULL;
org$pandalanguage$pandac$Compiler$Settings* local22 = NULL;
panda$threads$MessageQueue* local23 = NULL;
org$pandalanguage$pandac$Compiler* local24 = NULL;
panda$io$File* local25 = NULL;
org$pandalanguage$pandac$ClassDecl* local26 = NULL;
panda$io$File* local27 = NULL;
panda$core$Int64 local28;
org$pandalanguage$pandac$Compiler$Error* local29 = NULL;
// line 133
org$pandalanguage$pandac$Main$Arguments* $tmp253 = (org$pandalanguage$pandac$Main$Arguments*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Main$Arguments$class);
org$pandalanguage$pandac$Main$Arguments$init$panda$collections$ListView$LTpanda$core$String$GT($tmp253, param1);
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
org$pandalanguage$pandac$Main$Arguments* $tmp254 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp254));
*(&local0) = $tmp253;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp253));
// unreffing REF($1:org.pandalanguage.pandac.Main.Arguments)
// line 134
panda$collections$Array* $tmp255 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp255);
*(&local1) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
panda$collections$Array* $tmp256 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp256));
*(&local1) = $tmp255;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp255));
// unreffing REF($14:panda.collections.Array<panda.io.File>)
// line 135
panda$collections$Array* $tmp257 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp257);
*(&local2) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
panda$collections$Array* $tmp258 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp258));
*(&local2) = $tmp257;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp257));
// unreffing REF($28:panda.collections.Array<panda.io.File>)
// line 136
panda$collections$Array* $tmp259 = *(&local2);
panda$io$File** $tmp260 = &param0->srcDir;
panda$io$File* $tmp261 = *$tmp260;
panda$collections$Array$add$panda$collections$Array$T($tmp259, ((panda$core$Object*) $tmp261));
// line 137
*(&local3) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) NULL)));
panda$io$File* $tmp262 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp262));
*(&local3) = ((panda$io$File*) NULL);
// line 138
panda$core$Int64 $tmp263 = (panda$core$Int64) {3};
*(&local4) = $tmp263;
// line 139
panda$core$Int64 $tmp264 = (panda$core$Int64) {3};
*(&local5) = $tmp264;
// line 140
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { .nonnull = false });
// line 141
*(&local7) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$String*) NULL)));
panda$core$String* $tmp265 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp265));
*(&local7) = ((panda$core$String*) NULL);
// line 142
panda$core$Bit $tmp266 = panda$core$Bit$init$builtin_bit(true);
*(&local8) = $tmp266;
// line 143
panda$io$OutputStream* $tmp267 = panda$io$Console$errorStream$R$panda$io$OutputStream();
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
panda$io$OutputStream* $tmp268 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp268));
*(&local9) = $tmp267;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp267));
// unreffing REF($76:panda.io.OutputStream)
// line 144
goto block1;
block1:;
org$pandalanguage$pandac$Main$Arguments* $tmp269 = *(&local0);
$fn271 $tmp270 = ($fn271) $tmp269->$class->vtable[2];
panda$core$Bit $tmp272 = $tmp270($tmp269);
panda$core$Bit $tmp273 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp272);
bool $tmp274 = $tmp273.value;
if ($tmp274) goto block2; else goto block3;
block2:;
// line 145
org$pandalanguage$pandac$Main$Arguments* $tmp275 = *(&local0);
$fn277 $tmp276 = ($fn277) $tmp275->$class->vtable[3];
panda$core$String* $tmp278 = $tmp276($tmp275);
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
panda$core$String* $tmp279 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp279));
*(&local10) = $tmp278;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp278));
// unreffing REF($98:panda.core.String)
// line 146
panda$core$String* $tmp280 = *(&local10);
panda$core$Bit $tmp281 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s282);
bool $tmp283 = $tmp281.value;
if ($tmp283) goto block5; else goto block6;
block5:;
// line 148
panda$io$File* $tmp284 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp285 = panda$core$String$convert$R$panda$core$String(&$s286);
panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s288);
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s290, $tmp287);
panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s292);
panda$io$File$init$panda$core$String($tmp284, $tmp291);
*(&local11) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
panda$io$File* $tmp293 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp293));
*(&local11) = $tmp284;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp291));
// unreffing REF($119:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($118:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp287));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp285));
// unreffing REF($116:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp284));
// unreffing REF($115:panda.io.File)
// line 149
panda$io$InputStream* $tmp294 = panda$io$Console$inputStream$R$panda$io$InputStream();
panda$io$File* $tmp295 = *(&local11);
panda$io$OutputStream* $tmp296 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp295);
$fn298 $tmp297 = ($fn298) $tmp294->$class->vtable[16];
panda$core$Int64 $tmp299 = $tmp297($tmp294, $tmp296);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp296));
// unreffing REF($146:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp294));
// unreffing REF($144:panda.io.InputStream)
// line 150
panda$collections$Array* $tmp300 = *(&local1);
panda$io$File* $tmp301 = *(&local11);
panda$collections$Array$add$panda$collections$Array$T($tmp300, ((panda$core$Object*) $tmp301));
panda$io$File* $tmp302 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp302));
// unreffing path
*(&local11) = ((panda$io$File*) NULL);
goto block4;
block6:;
panda$core$Bit $tmp303 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s304);
bool $tmp305 = $tmp303.value;
if ($tmp305) goto block7; else goto block8;
block7:;
// line 153
panda$io$File* $tmp306 = *(&local3);
panda$core$Bit $tmp307 = panda$core$Bit$init$builtin_bit($tmp306 != NULL);
bool $tmp308 = $tmp307.value;
if ($tmp308) goto block9; else goto block10;
block9:;
// line 154
panda$io$OutputStream* $tmp309 = *(&local9);
$fn311 $tmp310 = ($fn311) $tmp309->$class->vtable[19];
$tmp310($tmp309, &$s312);
// line 155
panda$core$UInt8 $tmp313 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp313);
goto block10;
block10:;
// line 157
panda$io$File* $tmp314 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp315 = *(&local0);
$fn317 $tmp316 = ($fn317) $tmp315->$class->vtable[4];
panda$core$String* $tmp318 = $tmp316($tmp315, &$s319);
panda$io$File$init$panda$core$String($tmp314, $tmp318);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
panda$io$File* $tmp320 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp320));
*(&local3) = $tmp314;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp318));
// unreffing REF($188:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp314));
// unreffing REF($185:panda.io.File)
// line 158
panda$io$File* $tmp321 = *(&local3);
panda$core$Bit $tmp322 = panda$core$Bit$init$builtin_bit($tmp321 != NULL);
bool $tmp323 = $tmp322.value;
if ($tmp323) goto block11; else goto block12;
block12:;
panda$core$Int64 $tmp324 = (panda$core$Int64) {158};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s325, $tmp324, &$s326);
abort(); // unreachable
block11:;
panda$io$File* $tmp327 = panda$io$File$get_parent$R$panda$io$File$Q($tmp321);
panda$core$Bit $tmp328 = panda$core$Bit$init$builtin_bit($tmp327 != NULL);
bool $tmp329 = $tmp328.value;
if ($tmp329) goto block13; else goto block14;
block14:;
panda$core$Int64 $tmp330 = (panda$core$Int64) {158};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s331, $tmp330, &$s332);
abort(); // unreachable
block13:;
panda$io$File$createDirectories($tmp327);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing REF($213:panda.io.File?)
goto block4;
block8:;
panda$core$Bit $tmp333 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s334);
bool $tmp335 = $tmp333.value;
if ($tmp335) goto block15; else goto block16;
block15:;
// line 161
org$pandalanguage$pandac$Main$Arguments* $tmp336 = *(&local0);
$fn338 $tmp337 = ($fn338) $tmp336->$class->vtable[4];
panda$core$String* $tmp339 = $tmp337($tmp336, &$s340);
*(&local12) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
panda$core$String* $tmp341 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp341));
*(&local12) = $tmp339;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp339));
// unreffing REF($233:panda.core.String)
// line 162
panda$core$String* $tmp342 = *(&local12);
panda$core$Int64$nullable $tmp343 = panda$core$String$convert$R$panda$core$Int64$Q($tmp342);
panda$core$Bit $tmp344 = panda$core$Bit$init$builtin_bit($tmp343.nonnull);
bool $tmp345 = $tmp344.value;
if ($tmp345) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp346 = (panda$core$Int64) {162};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s347, $tmp346, &$s348);
abort(); // unreachable
block17:;
*(&local4) = ((panda$core$Int64) $tmp343.value);
// line 163
panda$core$Int64 $tmp349 = *(&local4);
panda$core$Int64 $tmp350 = (panda$core$Int64) {3};
int64_t $tmp351 = $tmp349.value;
int64_t $tmp352 = $tmp350.value;
bool $tmp353 = $tmp351 > $tmp352;
panda$core$Bit $tmp354 = (panda$core$Bit) {$tmp353};
bool $tmp355 = $tmp354.value;
if ($tmp355) goto block21; else goto block22;
block21:;
*(&local13) = $tmp354;
goto block23;
block22:;
panda$core$Int64 $tmp356 = *(&local4);
panda$core$Int64 $tmp357 = (panda$core$Int64) {0};
int64_t $tmp358 = $tmp356.value;
int64_t $tmp359 = $tmp357.value;
bool $tmp360 = $tmp358 < $tmp359;
panda$core$Bit $tmp361 = (panda$core$Bit) {$tmp360};
*(&local13) = $tmp361;
goto block23;
block23:;
panda$core$Bit $tmp362 = *(&local13);
bool $tmp363 = $tmp362.value;
if ($tmp363) goto block19; else goto block20;
block19:;
// line 164
panda$io$OutputStream* $tmp364 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn366 $tmp365 = ($fn366) $tmp364->$class->vtable[19];
$tmp365($tmp364, &$s367);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
// unreffing REF($279:panda.io.OutputStream)
// line 165
panda$core$UInt8 $tmp368 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp368);
goto block20;
block20:;
panda$core$String* $tmp369 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp369));
// unreffing level
*(&local12) = ((panda$core$String*) NULL);
goto block4;
block16:;
panda$core$Bit $tmp370 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s371);
bool $tmp372 = $tmp370.value;
if ($tmp372) goto block24; else goto block25;
block24:;
// line 169
org$pandalanguage$pandac$Main$Arguments* $tmp373 = *(&local0);
$fn375 $tmp374 = ($fn375) $tmp373->$class->vtable[4];
panda$core$String* $tmp376 = $tmp374($tmp373, &$s377);
*(&local14) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
panda$core$String* $tmp378 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp378));
*(&local14) = $tmp376;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp376));
// unreffing REF($301:panda.core.String)
// line 170
panda$core$String* $tmp379 = *(&local14);
panda$core$Int64$nullable $tmp380 = panda$core$String$convert$R$panda$core$Int64$Q($tmp379);
panda$core$Bit $tmp381 = panda$core$Bit$init$builtin_bit($tmp380.nonnull);
bool $tmp382 = $tmp381.value;
if ($tmp382) goto block26; else goto block27;
block27:;
panda$core$Int64 $tmp383 = (panda$core$Int64) {170};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s384, $tmp383, &$s385);
abort(); // unreachable
block26:;
*(&local5) = ((panda$core$Int64) $tmp380.value);
// line 171
panda$core$Int64 $tmp386 = *(&local5);
panda$core$Int64 $tmp387 = (panda$core$Int64) {3};
int64_t $tmp388 = $tmp386.value;
int64_t $tmp389 = $tmp387.value;
bool $tmp390 = $tmp388 > $tmp389;
panda$core$Bit $tmp391 = (panda$core$Bit) {$tmp390};
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block30; else goto block31;
block30:;
*(&local15) = $tmp391;
goto block32;
block31:;
panda$core$Int64 $tmp393 = *(&local5);
panda$core$Int64 $tmp394 = (panda$core$Int64) {0};
int64_t $tmp395 = $tmp393.value;
int64_t $tmp396 = $tmp394.value;
bool $tmp397 = $tmp395 < $tmp396;
panda$core$Bit $tmp398 = (panda$core$Bit) {$tmp397};
*(&local15) = $tmp398;
goto block32;
block32:;
panda$core$Bit $tmp399 = *(&local15);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block28; else goto block29;
block28:;
// line 172
panda$io$OutputStream* $tmp401 = panda$io$Console$errorStream$R$panda$io$OutputStream();
$fn403 $tmp402 = ($fn403) $tmp401->$class->vtable[19];
$tmp402($tmp401, &$s404);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp401));
// unreffing REF($347:panda.io.OutputStream)
// line 173
panda$core$UInt8 $tmp405 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp405);
goto block29;
block29:;
panda$core$String* $tmp406 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
// unreffing level
*(&local14) = ((panda$core$String*) NULL);
goto block4;
block25:;
panda$core$Bit $tmp407 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s408);
bool $tmp409 = $tmp407.value;
if ($tmp409) goto block33; else goto block34;
block33:;
// line 177
org$pandalanguage$pandac$Main$Format$nullable $tmp410 = *(&local6);
panda$core$Bit $tmp411 = panda$core$Bit$init$builtin_bit($tmp410.nonnull);
bool $tmp412 = $tmp411.value;
if ($tmp412) goto block35; else goto block36;
block35:;
// line 178
panda$io$OutputStream* $tmp413 = *(&local9);
$fn415 $tmp414 = ($fn415) $tmp413->$class->vtable[19];
$tmp414($tmp413, &$s416);
// line 179
panda$core$UInt8 $tmp417 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp417);
goto block36;
block36:;
// line 181
org$pandalanguage$pandac$Main$Arguments* $tmp418 = *(&local0);
$fn420 $tmp419 = ($fn420) $tmp418->$class->vtable[4];
panda$core$String* $tmp421 = $tmp419($tmp418, &$s422);
*(&local16) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
panda$core$String* $tmp423 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp423));
*(&local16) = $tmp421;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp421));
// unreffing REF($383:panda.core.String)
// line 182
panda$core$String* $tmp424 = *(&local16);
panda$core$Bit $tmp425 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s426);
bool $tmp427 = $tmp425.value;
if ($tmp427) goto block38; else goto block39;
block38:;
// line 183
panda$core$Int64 $tmp428 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp429 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp428);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp429, true });
goto block37;
block39:;
panda$core$Bit $tmp430 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s431);
bool $tmp432 = $tmp430.value;
if ($tmp432) goto block40; else goto block41;
block40:;
// line 184
panda$core$Int64 $tmp433 = (panda$core$Int64) {2};
org$pandalanguage$pandac$Main$Format $tmp434 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp433);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp434, true });
goto block37;
block41:;
panda$core$Bit $tmp435 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s436);
bool $tmp437 = $tmp435.value;
if ($tmp437) goto block42; else goto block43;
block42:;
// line 185
panda$core$Int64 $tmp438 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Main$Format $tmp439 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp438);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp439, true });
goto block37;
block43:;
panda$core$Bit $tmp440 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s441);
bool $tmp442 = $tmp440.value;
if ($tmp442) goto block44; else goto block45;
block44:;
// line 186
panda$core$Int64 $tmp443 = (panda$core$Int64) {3};
org$pandalanguage$pandac$Main$Format $tmp444 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp443);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp444, true });
goto block37;
block45:;
panda$core$Bit $tmp445 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s446);
bool $tmp447 = $tmp445.value;
if ($tmp447) goto block46; else goto block47;
block46:;
// line 187
panda$core$Int64 $tmp448 = (panda$core$Int64) {4};
org$pandalanguage$pandac$Main$Format $tmp449 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp448);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp449, true });
goto block37;
block47:;
panda$core$Bit $tmp450 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp424, &$s451);
bool $tmp452 = $tmp450.value;
if ($tmp452) goto block48; else goto block49;
block48:;
// line 188
panda$core$Int64 $tmp453 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp454 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp453);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp454, true });
goto block37;
block49:;
// line 190
panda$io$OutputStream* $tmp455 = *(&local9);
panda$core$String* $tmp456 = *(&local16);
panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s458, $tmp456);
panda$core$String* $tmp459 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s460);
$fn462 $tmp461 = ($fn462) $tmp455->$class->vtable[19];
$tmp461($tmp455, $tmp459);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp459));
// unreffing REF($454:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp457));
// unreffing REF($453:panda.core.String)
// line 191
panda$core$UInt8 $tmp463 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp463);
goto block37;
block37:;
panda$core$String* $tmp464 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp464));
// unreffing f
*(&local16) = ((panda$core$String*) NULL);
goto block4;
block34:;
panda$core$Bit $tmp465 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s466);
bool $tmp467 = $tmp465.value;
if ($tmp467) goto block50; else goto block51;
block50:;
// line 196
panda$collections$Array* $tmp468 = *(&local2);
panda$io$File* $tmp469 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
org$pandalanguage$pandac$Main$Arguments* $tmp470 = *(&local0);
$fn472 $tmp471 = ($fn472) $tmp470->$class->vtable[4];
panda$core$String* $tmp473 = $tmp471($tmp470, &$s474);
panda$io$File$init$panda$core$String($tmp469, $tmp473);
panda$collections$Array$add$panda$collections$Array$T($tmp468, ((panda$core$Object*) $tmp469));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp473));
// unreffing REF($482:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp469));
// unreffing REF($479:panda.io.File)
goto block4;
block51:;
panda$core$Bit $tmp475 = panda$core$String$$EQ$panda$core$String$R$panda$core$Bit($tmp280, &$s476);
bool $tmp477 = $tmp475.value;
if ($tmp477) goto block52; else goto block53;
block52:;
// line 199
org$pandalanguage$pandac$Main$Arguments* $tmp478 = *(&local0);
$fn480 $tmp479 = ($fn480) $tmp478->$class->vtable[4];
panda$core$String* $tmp481 = $tmp479($tmp478, &$s482);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
panda$core$String* $tmp483 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp483));
*(&local7) = $tmp481;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp481));
// unreffing REF($499:panda.core.String)
goto block4;
block53:;
// line 202
panda$core$String* $tmp484 = *(&local10);
panda$core$Bit $tmp485 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp484, &$s486);
bool $tmp487 = $tmp485.value;
if ($tmp487) goto block56; else goto block57;
block56:;
*(&local17) = $tmp485;
goto block58;
block57:;
panda$core$String* $tmp488 = *(&local10);
panda$core$String* $tmp489 = panda$core$String$convert$R$panda$core$String(&$s490);
panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp489, &$s492);
panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s494, $tmp491);
panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp493, &$s496);
panda$core$Bit $tmp497 = panda$core$String$endsWith$panda$core$String$R$panda$core$Bit($tmp488, $tmp495);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp495));
// unreffing REF($522:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp493));
// unreffing REF($521:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
// unreffing REF($520:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp489));
// unreffing REF($519:panda.core.String)
*(&local17) = $tmp497;
goto block58;
block58:;
panda$core$Bit $tmp498 = *(&local17);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block54; else goto block59;
block54:;
// line 203
panda$collections$Array* $tmp500 = *(&local1);
panda$io$File* $tmp501 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp502 = *(&local10);
panda$io$File$init$panda$core$String($tmp501, $tmp502);
panda$collections$Array$add$panda$collections$Array$T($tmp500, ((panda$core$Object*) $tmp501));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp501));
// unreffing REF($544:panda.io.File)
goto block55;
block59:;
// line 1
// line 206
panda$io$OutputStream* $tmp503 = panda$io$Console$outputStream$R$panda$io$OutputStream();
org$pandalanguage$pandac$Main$printUsage$panda$io$OutputStream(param0, $tmp503);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp503));
// unreffing REF($555:panda.io.OutputStream)
// line 207
panda$core$UInt8 $tmp504 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp504);
goto block55;
block55:;
goto block4;
block4:;
panda$core$String* $tmp505 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp505));
// unreffing a
*(&local10) = ((panda$core$String*) NULL);
goto block1;
block3:;
// line 212
panda$io$File* $tmp506 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$core$String* $tmp507 = org$pandalanguage$pandac$Config$llvmDir$R$panda$core$String();
panda$io$File$init$panda$core$String($tmp506, $tmp507);
*(&local18) = ((panda$io$File*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
panda$io$File* $tmp508 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp508));
*(&local18) = $tmp506;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp507));
// unreffing REF($573:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp506));
// unreffing REF($572:panda.io.File)
// line 213
panda$io$File* $tmp509 = (panda$io$File*) frostObjectAlloc(24, (panda$core$Class*) &panda$io$File$class);
panda$io$File$init$panda$core$String($tmp509, &$s510);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
panda$io$File** $tmp511 = &param0->clang;
panda$io$File* $tmp512 = *$tmp511;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
panda$io$File** $tmp513 = &param0->clang;
*$tmp513 = $tmp509;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
// unreffing REF($589:panda.io.File)
// line 214
panda$collections$Array* $tmp514 = *(&local1);
ITable* $tmp515 = ((panda$collections$CollectionView*) $tmp514)->$class->itable;
while ($tmp515->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp515 = $tmp515->next;
}
$fn517 $tmp516 = $tmp515->methods[0];
panda$core$Int64 $tmp518 = $tmp516(((panda$collections$CollectionView*) $tmp514));
panda$core$Int64 $tmp519 = (panda$core$Int64) {0};
panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp518, $tmp519);
bool $tmp521 = $tmp520.value;
if ($tmp521) goto block60; else goto block61;
block60:;
// line 215
panda$io$OutputStream* $tmp522 = *(&local9);
$fn524 $tmp523 = ($fn524) $tmp522->$class->vtable[19];
$tmp523($tmp522, &$s525);
// line 216
panda$core$UInt8 $tmp526 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp526);
goto block61;
block61:;
// line 218
org$pandalanguage$pandac$Main$Format$nullable $tmp527 = *(&local6);
panda$core$Bit $tmp528 = panda$core$Bit$init$builtin_bit(!$tmp527.nonnull);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block62; else goto block63;
block62:;
// line 219
panda$core$Int64 $tmp530 = (panda$core$Int64) {1};
org$pandalanguage$pandac$Main$Format $tmp531 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp530);
*(&local6) = ((org$pandalanguage$pandac$Main$Format$nullable) { $tmp531, true });
goto block63;
block63:;
// line 221
panda$io$File* $tmp532 = *(&local3);
panda$core$Bit $tmp533 = panda$core$Bit$init$builtin_bit($tmp532 == NULL);
bool $tmp534 = $tmp533.value;
if ($tmp534) goto block64; else goto block65;
block64:;
// line 222
panda$collections$Array* $tmp535 = *(&local1);
ITable* $tmp536 = ((panda$collections$CollectionView*) $tmp535)->$class->itable;
while ($tmp536->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp536 = $tmp536->next;
}
$fn538 $tmp537 = $tmp536->methods[0];
panda$core$Int64 $tmp539 = $tmp537(((panda$collections$CollectionView*) $tmp535));
panda$core$Int64 $tmp540 = (panda$core$Int64) {1};
panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp539, $tmp540);
bool $tmp542 = $tmp541.value;
if ($tmp542) goto block66; else goto block68;
block66:;
// line 223
*(&local19) = ((panda$core$String*) NULL);
// line 224
org$pandalanguage$pandac$Main$Format$nullable $tmp543 = *(&local6);
panda$core$Bit $tmp544 = panda$core$Bit$init$builtin_bit($tmp543.nonnull);
bool $tmp545 = $tmp544.value;
if ($tmp545) goto block69; else goto block70;
block70:;
panda$core$Int64 $tmp546 = (panda$core$Int64) {224};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s547, $tmp546, &$s548);
abort(); // unreachable
block69:;
panda$core$Int64 $tmp549 = ((org$pandalanguage$pandac$Main$Format) $tmp543.value).$rawValue;
panda$core$Int64 $tmp550 = (panda$core$Int64) {1};
panda$core$Bit $tmp551 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp549, $tmp550);
bool $tmp552 = $tmp551.value;
if ($tmp552) goto block72; else goto block73;
block72:;
// line 225
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s553));
panda$core$String* $tmp554 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp554));
*(&local19) = &$s555;
goto block71;
block73:;
panda$core$Int64 $tmp556 = (panda$core$Int64) {2};
panda$core$Bit $tmp557 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp549, $tmp556);
bool $tmp558 = $tmp557.value;
if ($tmp558) goto block74; else goto block75;
block74:;
// line 226
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s559));
panda$core$String* $tmp560 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
*(&local19) = &$s561;
goto block71;
block75:;
panda$core$Int64 $tmp562 = (panda$core$Int64) {0};
panda$core$Bit $tmp563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp549, $tmp562);
bool $tmp564 = $tmp563.value;
if ($tmp564) goto block76; else goto block77;
block76:;
// line 227
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s565));
panda$core$String* $tmp566 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
*(&local19) = &$s567;
goto block71;
block77:;
panda$core$Int64 $tmp568 = (panda$core$Int64) {5};
panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp549, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block78; else goto block79;
block78:;
// line 228
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s571));
panda$core$String* $tmp572 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
*(&local19) = &$s573;
goto block71;
block79:;
// line 230
panda$io$OutputStream* $tmp574 = *(&local9);
$fn576 $tmp575 = ($fn576) $tmp574->$class->vtable[19];
$tmp575($tmp574, &$s577);
// line 231
panda$core$UInt8 $tmp578 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp578);
goto block71;
block71:;
// line 234
panda$collections$Array* $tmp579 = *(&local1);
panda$core$Int64 $tmp580 = (panda$core$Int64) {0};
panda$core$Object* $tmp581 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp579, $tmp580);
panda$core$String* $tmp582 = *(&local19);
panda$io$File* $tmp583 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File(((panda$io$File*) $tmp581), $tmp582);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
panda$io$File* $tmp584 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
*(&local3) = $tmp583;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing REF($722:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q($tmp581);
// unreffing REF($719:panda.collections.Array.T)
panda$core$String* $tmp585 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing extension
*(&local19) = ((panda$core$String*) NULL);
goto block67;
block68:;
// line 236
org$pandalanguage$pandac$Main$Format$nullable $tmp586 = *(&local6);
panda$core$Bit $tmp587 = panda$core$Bit$init$builtin_bit($tmp586.nonnull);
bool $tmp588 = $tmp587.value;
if ($tmp588) goto block82; else goto block83;
block83:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {236};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s590, $tmp589, &$s591);
abort(); // unreachable
block82:;
panda$core$Equatable* $tmp592;
if ($tmp586.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp593;
    $tmp593 = (org$pandalanguage$pandac$Main$Format$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp593->value = ((org$pandalanguage$pandac$Main$Format) $tmp586.value);
    $tmp592 = ((panda$core$Equatable*) $tmp593);
}
else {
    $tmp592 = NULL;
}
panda$core$Int64 $tmp594 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp595 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp594);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp596;
$tmp596 = (org$pandalanguage$pandac$Main$Format$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp596->value = $tmp595;
ITable* $tmp597 = $tmp592->$class->itable;
while ($tmp597->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp597 = $tmp597->next;
}
$fn599 $tmp598 = $tmp597->methods[0];
panda$core$Bit $tmp600 = $tmp598($tmp592, ((panda$core$Equatable*) $tmp596));
bool $tmp601 = $tmp600.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp596)));
// unreffing REF($755:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp592));
// unreffing REF($751:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp601) goto block80; else goto block84;
block80:;
// line 237
panda$io$OutputStream* $tmp602 = *(&local9);
$fn604 $tmp603 = ($fn604) $tmp602->$class->vtable[19];
$tmp603($tmp602, &$s605);
// line 238
panda$core$UInt8 $tmp606 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp606);
goto block81;
block84:;
// line 1
// line 241
panda$io$OutputStream* $tmp607 = *(&local9);
$fn609 $tmp608 = ($fn609) $tmp607->$class->vtable[19];
$tmp608($tmp607, &$s610);
// line 243
panda$core$UInt8 $tmp611 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp611);
goto block81;
block81:;
goto block67;
block67:;
goto block65;
block65:;
// line 246
org$pandalanguage$pandac$Main$Format$nullable $tmp612 = *(&local6);
panda$core$Bit $tmp613 = panda$core$Bit$init$builtin_bit($tmp612.nonnull);
bool $tmp614 = $tmp613.value;
if ($tmp614) goto block87; else goto block88;
block88:;
panda$core$Int64 $tmp615 = (panda$core$Int64) {246};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s616, $tmp615, &$s617);
abort(); // unreachable
block87:;
panda$core$Equatable* $tmp618;
if ($tmp612.nonnull) {
    org$pandalanguage$pandac$Main$Format$wrapper* $tmp619;
    $tmp619 = (org$pandalanguage$pandac$Main$Format$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
    $tmp619->value = ((org$pandalanguage$pandac$Main$Format) $tmp612.value);
    $tmp618 = ((panda$core$Equatable*) $tmp619);
}
else {
    $tmp618 = NULL;
}
panda$core$Int64 $tmp620 = (panda$core$Int64) {5};
org$pandalanguage$pandac$Main$Format $tmp621 = org$pandalanguage$pandac$Main$Format$init$panda$core$Int64($tmp620);
org$pandalanguage$pandac$Main$Format$wrapper* $tmp622;
$tmp622 = (org$pandalanguage$pandac$Main$Format$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Main$Format$wrapperclass);
$tmp622->value = $tmp621;
ITable* $tmp623 = $tmp618->$class->itable;
while ($tmp623->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp623 = $tmp623->next;
}
$fn625 $tmp624 = $tmp623->methods[0];
panda$core$Bit $tmp626 = $tmp624($tmp618, ((panda$core$Equatable*) $tmp622));
bool $tmp627 = $tmp626.value;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp622)));
// unreffing REF($798:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing REF($794:panda.core.Equatable<org.pandalanguage.pandac.Main.Format>)
if ($tmp627) goto block85; else goto block86;
block85:;
// line 247
panda$core$String* $tmp628 = *(&local7);
panda$core$Bit $tmp629 = panda$core$Bit$init$builtin_bit($tmp628 == NULL);
bool $tmp630 = $tmp629.value;
if ($tmp630) goto block89; else goto block90;
block89:;
// line 248
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s631));
panda$core$String* $tmp632 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp632));
*(&local7) = &$s631;
goto block90;
block90:;
// line 250
org$pandalanguage$pandac$HTMLProcessor* $tmp633 = (org$pandalanguage$pandac$HTMLProcessor*) frostObjectAlloc(12, (panda$core$Class*) &org$pandalanguage$pandac$HTMLProcessor$class);
org$pandalanguage$pandac$HTMLProcessor$init($tmp633);
panda$collections$Array* $tmp634 = *(&local1);
panda$core$Int64 $tmp635 = (panda$core$Int64) {0};
panda$core$Object* $tmp636 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp634, $tmp635);
panda$io$File* $tmp637 = *(&local3);
panda$core$Bit $tmp638 = panda$core$Bit$init$builtin_bit($tmp637 != NULL);
bool $tmp639 = $tmp638.value;
if ($tmp639) goto block91; else goto block92;
block92:;
panda$core$Int64 $tmp640 = (panda$core$Int64) {250};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s641, $tmp640, &$s642);
abort(); // unreachable
block91:;
panda$core$String* $tmp643 = *(&local7);
panda$core$Bit $tmp644 = panda$core$Bit$init$builtin_bit($tmp643 != NULL);
bool $tmp645 = $tmp644.value;
if ($tmp645) goto block93; else goto block94;
block94:;
panda$core$Int64 $tmp646 = (panda$core$Int64) {250};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s647, $tmp646, &$s648);
abort(); // unreachable
block93:;
$fn650 $tmp649 = ($fn650) $tmp633->$class->vtable[3];
$tmp649($tmp633, ((panda$io$File*) $tmp636), $tmp637, $tmp643);
panda$core$Panda$unref$panda$core$Object$Q($tmp636);
// unreffing REF($830:panda.collections.Array.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp633));
// unreffing REF($825:org.pandalanguage.pandac.HTMLProcessor)
// line 251
panda$io$File* $tmp651 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
// unreffing llvmDir
*(&local18) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp652 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp653 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp654 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp655 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp656 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp657 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;
block86:;
// line 253
panda$core$String* $tmp658 = *(&local7);
panda$core$Bit $tmp659 = panda$core$Bit$init$builtin_bit($tmp658 != NULL);
bool $tmp660 = $tmp659.value;
if ($tmp660) goto block95; else goto block96;
block95:;
// line 254
panda$io$OutputStream* $tmp661 = *(&local9);
$fn663 $tmp662 = ($fn663) $tmp661->$class->vtable[19];
$tmp662($tmp661, &$s664);
// line 255
panda$core$UInt8 $tmp665 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp665);
goto block96;
block96:;
// line 257
// line 1
// line 259
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 260
org$pandalanguage$pandac$Main$Format$nullable $tmp666 = *(&local6);
panda$core$Bit $tmp667 = panda$core$Bit$init$builtin_bit($tmp666.nonnull);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block97; else goto block98;
block98:;
panda$core$Int64 $tmp669 = (panda$core$Int64) {260};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s670, $tmp669, &$s671);
abort(); // unreachable
block97:;
panda$core$Int64 $tmp672 = ((org$pandalanguage$pandac$Main$Format) $tmp666.value).$rawValue;
panda$core$Int64 $tmp673 = (panda$core$Int64) {0};
panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp673);
bool $tmp675 = $tmp674.value;
if ($tmp675) goto block100; else goto block101;
block101:;
panda$core$Int64 $tmp676 = (panda$core$Int64) {1};
panda$core$Bit $tmp677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp676);
bool $tmp678 = $tmp677.value;
if ($tmp678) goto block100; else goto block102;
block102:;
panda$core$Int64 $tmp679 = (panda$core$Int64) {2};
panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp679);
bool $tmp681 = $tmp680.value;
if ($tmp681) goto block100; else goto block103;
block100:;
// line 262
org$pandalanguage$pandac$LLVMCodeGenerator* $tmp682 = (org$pandalanguage$pandac$LLVMCodeGenerator*) frostObjectAlloc(240, (panda$core$Class*) &org$pandalanguage$pandac$LLVMCodeGenerator$class);
panda$core$String* $tmp683 = org$pandalanguage$pandac$Config$llvmTriple$R$panda$core$String();
panda$io$File* $tmp684 = *(&local3);
panda$core$Bit $tmp685 = panda$core$Bit$init$builtin_bit($tmp684 != NULL);
bool $tmp686 = $tmp685.value;
if ($tmp686) goto block104; else goto block105;
block105:;
panda$core$Int64 $tmp687 = (panda$core$Int64) {263};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s688, $tmp687, &$s689);
abort(); // unreachable
block104:;
panda$io$File* $tmp690 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp684, &$s691);
panda$io$OutputStream* $tmp692 = panda$io$File$openOutputStream$R$panda$io$OutputStream($tmp690);
org$pandalanguage$pandac$LLVMCodeGenerator$init$panda$core$String$panda$io$OutputStream($tmp682, $tmp683, $tmp692);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp682)));
org$pandalanguage$pandac$CodeGenerator* $tmp693 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp682);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
// unreffing REF($949:panda.io.OutputStream)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp690));
// unreffing REF($948:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing REF($938:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// unreffing REF($937:org.pandalanguage.pandac.LLVMCodeGenerator)
goto block99;
block103:;
panda$core$Int64 $tmp694 = (panda$core$Int64) {3};
panda$core$Bit $tmp695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp694);
bool $tmp696 = $tmp695.value;
if ($tmp696) goto block106; else goto block107;
block106:;
// line 266
org$pandalanguage$pandac$HCodeGenerator* $tmp697 = (org$pandalanguage$pandac$HCodeGenerator*) frostObjectAlloc(152, (panda$core$Class*) &org$pandalanguage$pandac$HCodeGenerator$class);
panda$io$File* $tmp698 = *(&local3);
panda$core$Bit $tmp699 = panda$core$Bit$init$builtin_bit($tmp698 != NULL);
bool $tmp700 = $tmp699.value;
if ($tmp700) goto block108; else goto block109;
block109:;
panda$core$Int64 $tmp701 = (panda$core$Int64) {266};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s702, $tmp701, &$s703);
abort(); // unreachable
block108:;
org$pandalanguage$pandac$HCodeGenerator$init$panda$io$File($tmp697, $tmp698);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp697)));
org$pandalanguage$pandac$CodeGenerator* $tmp704 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp697);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($976:org.pandalanguage.pandac.HCodeGenerator)
goto block99;
block107:;
panda$core$Int64 $tmp705 = (panda$core$Int64) {4};
panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp672, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block110; else goto block111;
block110:;
// line 269
org$pandalanguage$pandac$CCodeGenerator* $tmp708 = (org$pandalanguage$pandac$CCodeGenerator*) frostObjectAlloc(264, (panda$core$Class*) &org$pandalanguage$pandac$CCodeGenerator$class);
panda$io$File* $tmp709 = *(&local3);
panda$core$Bit $tmp710 = panda$core$Bit$init$builtin_bit($tmp709 != NULL);
bool $tmp711 = $tmp710.value;
if ($tmp711) goto block112; else goto block113;
block113:;
panda$core$Int64 $tmp712 = (panda$core$Int64) {269};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s713, $tmp712, &$s714);
abort(); // unreachable
block112:;
org$pandalanguage$pandac$CCodeGenerator$init$panda$io$File($tmp708, $tmp709);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$CodeGenerator*) $tmp708)));
org$pandalanguage$pandac$CodeGenerator* $tmp715 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) $tmp708);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($1003:org.pandalanguage.pandac.CCodeGenerator)
goto block99;
block111:;
// line 272
panda$core$Bit $tmp716 = panda$core$Bit$init$builtin_bit(false);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block114; else goto block115;
block115:;
panda$core$Int64 $tmp718 = (panda$core$Int64) {272};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s719, $tmp718);
abort(); // unreachable
block114:;
goto block99;
block99:;
// line 275
org$pandalanguage$pandac$Compiler$Settings* $tmp720 = (org$pandalanguage$pandac$Compiler$Settings*) frostObjectAlloc(49, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Settings$class);
panda$io$File** $tmp721 = &param0->srcDir;
panda$io$File* $tmp722 = *$tmp721;
panda$collections$Array* $tmp723 = *(&local2);
panda$core$Int64 $tmp724 = *(&local4);
panda$core$Int64 $tmp725 = *(&local5);
panda$core$Bit* $tmp726 = &param0->debug;
panda$core$Bit $tmp727 = *$tmp726;
org$pandalanguage$pandac$Compiler$Settings$init$panda$io$File$panda$collections$ListView$LTpanda$io$File$GT$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp720, $tmp722, ((panda$collections$ListView*) $tmp723), $tmp724, $tmp725, $tmp727);
*(&local22) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
org$pandalanguage$pandac$Compiler$Settings* $tmp728 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
*(&local22) = $tmp720;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($1034:org.pandalanguage.pandac.Compiler.Settings)
// line 277
panda$threads$MessageQueue* $tmp729 = (panda$threads$MessageQueue*) frostObjectAlloc(56, (panda$core$Class*) &panda$threads$MessageQueue$class);
panda$threads$MessageQueue$init($tmp729);
*(&local23) = ((panda$threads$MessageQueue*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
panda$threads$MessageQueue* $tmp730 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
*(&local23) = $tmp729;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp729));
// unreffing REF($1055:panda.threads.MessageQueue<org.pandalanguage.pandac.Compiler.Error>)
// line 278
org$pandalanguage$pandac$Compiler* $tmp731 = (org$pandalanguage$pandac$Compiler*) frostObjectAlloc(256, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$class);
panda$threads$MessageQueue* $tmp732 = *(&local23);
org$pandalanguage$pandac$CodeGenerator* $tmp733 = *(&local21);
org$pandalanguage$pandac$Compiler$Settings* $tmp734 = *(&local22);
org$pandalanguage$pandac$Compiler$init$panda$threads$MessageQueue$LTorg$pandalanguage$pandac$Compiler$Error$GT$org$pandalanguage$pandac$CodeGenerator$org$pandalanguage$pandac$Compiler$Settings($tmp731, $tmp732, $tmp733, $tmp734);
*(&local24) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
org$pandalanguage$pandac$Compiler* $tmp735 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
*(&local24) = $tmp731;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing REF($1069:org.pandalanguage.pandac.Compiler)
// line 279
panda$collections$Array* $tmp736 = *(&local1);
ITable* $tmp737 = ((panda$collections$Iterable*) $tmp736)->$class->itable;
while ($tmp737->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp737 = $tmp737->next;
}
$fn739 $tmp738 = $tmp737->methods[0];
panda$collections$Iterator* $tmp740 = $tmp738(((panda$collections$Iterable*) $tmp736));
goto block116;
block116:;
ITable* $tmp741 = $tmp740->$class->itable;
while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp741 = $tmp741->next;
}
$fn743 $tmp742 = $tmp741->methods[0];
panda$core$Bit $tmp744 = $tmp742($tmp740);
bool $tmp745 = $tmp744.value;
if ($tmp745) goto block118; else goto block117;
block117:;
*(&local25) = ((panda$io$File*) NULL);
ITable* $tmp746 = $tmp740->$class->itable;
while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp746 = $tmp746->next;
}
$fn748 $tmp747 = $tmp746->methods[1];
panda$core$Object* $tmp749 = $tmp747($tmp740);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp749)));
panda$io$File* $tmp750 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
*(&local25) = ((panda$io$File*) $tmp749);
// line 280
org$pandalanguage$pandac$Compiler* $tmp751 = *(&local24);
panda$io$File* $tmp752 = *(&local25);
panda$collections$ListView* $tmp753 = org$pandalanguage$pandac$Compiler$scan$panda$io$File$R$panda$collections$ListView$LTorg$pandalanguage$pandac$ClassDecl$GT($tmp751, $tmp752);
ITable* $tmp754 = ((panda$collections$Iterable*) $tmp753)->$class->itable;
while ($tmp754->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp754 = $tmp754->next;
}
$fn756 $tmp755 = $tmp754->methods[0];
panda$collections$Iterator* $tmp757 = $tmp755(((panda$collections$Iterable*) $tmp753));
goto block119;
block119:;
ITable* $tmp758 = $tmp757->$class->itable;
while ($tmp758->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp758 = $tmp758->next;
}
$fn760 $tmp759 = $tmp758->methods[0];
panda$core$Bit $tmp761 = $tmp759($tmp757);
bool $tmp762 = $tmp761.value;
if ($tmp762) goto block121; else goto block120;
block120:;
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
ITable* $tmp763 = $tmp757->$class->itable;
while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp763 = $tmp763->next;
}
$fn765 $tmp764 = $tmp763->methods[1];
panda$core$Object* $tmp766 = $tmp764($tmp757);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ClassDecl*) $tmp766)));
org$pandalanguage$pandac$ClassDecl* $tmp767 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) $tmp766);
// line 281
org$pandalanguage$pandac$Compiler* $tmp768 = *(&local24);
org$pandalanguage$pandac$ClassDecl* $tmp769 = *(&local26);
org$pandalanguage$pandac$Compiler$markNonExternal$org$pandalanguage$pandac$ClassDecl($tmp768, $tmp769);
panda$core$Panda$unref$panda$core$Object$Q($tmp766);
// unreffing REF($1126:panda.collections.Iterator.T)
org$pandalanguage$pandac$ClassDecl* $tmp770 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing cl
*(&local26) = ((org$pandalanguage$pandac$ClassDecl*) NULL);
goto block119;
block121:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing REF($1115:panda.collections.Iterator<panda.collections.Iterable.T>)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($1111:panda.collections.ListView<org.pandalanguage.pandac.ClassDecl>)
panda$core$Panda$unref$panda$core$Object$Q($tmp749);
// unreffing REF($1100:panda.collections.Iterator.T)
panda$io$File* $tmp771 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing s
*(&local25) = ((panda$io$File*) NULL);
goto block116;
block118:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp740));
// unreffing REF($1089:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 284
panda$collections$Array* $tmp772 = *(&local1);
ITable* $tmp773 = ((panda$collections$Iterable*) $tmp772)->$class->itable;
while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp773 = $tmp773->next;
}
$fn775 $tmp774 = $tmp773->methods[0];
panda$collections$Iterator* $tmp776 = $tmp774(((panda$collections$Iterable*) $tmp772));
goto block122;
block122:;
ITable* $tmp777 = $tmp776->$class->itable;
while ($tmp777->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp777 = $tmp777->next;
}
$fn779 $tmp778 = $tmp777->methods[0];
panda$core$Bit $tmp780 = $tmp778($tmp776);
bool $tmp781 = $tmp780.value;
if ($tmp781) goto block124; else goto block123;
block123:;
*(&local27) = ((panda$io$File*) NULL);
ITable* $tmp782 = $tmp776->$class->itable;
while ($tmp782->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp782 = $tmp782->next;
}
$fn784 $tmp783 = $tmp782->methods[1];
panda$core$Object* $tmp785 = $tmp783($tmp776);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((panda$io$File*) $tmp785)));
panda$io$File* $tmp786 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
*(&local27) = ((panda$io$File*) $tmp785);
// line 285
org$pandalanguage$pandac$Compiler* $tmp787 = *(&local24);
panda$io$File* $tmp788 = *(&local27);
org$pandalanguage$pandac$Compiler$compile$panda$io$File($tmp787, $tmp788);
panda$core$Panda$unref$panda$core$Object$Q($tmp785);
// unreffing REF($1181:panda.collections.Iterator.T)
panda$io$File* $tmp789 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
// unreffing s
*(&local27) = ((panda$io$File*) NULL);
goto block122;
block124:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing REF($1170:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 287
org$pandalanguage$pandac$Compiler* $tmp790 = *(&local24);
org$pandalanguage$pandac$Compiler$finish($tmp790);
// line 288
panda$threads$MessageQueue* $tmp791 = *(&local23);
panda$core$Int64 $tmp792 = panda$threads$MessageQueue$pendingMessages$R$panda$core$Int64($tmp791);
*(&local20) = $tmp792;
// line 289
panda$core$Int64 $tmp793 = (panda$core$Int64) {0};
panda$core$Int64 $tmp794 = *(&local20);
panda$core$Bit $tmp795 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp796 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp793, $tmp794, $tmp795);
panda$core$Int64 $tmp797 = $tmp796.min;
*(&local28) = $tmp797;
panda$core$Int64 $tmp798 = $tmp796.max;
panda$core$Bit $tmp799 = $tmp796.inclusive;
bool $tmp800 = $tmp799.value;
panda$core$Int64 $tmp801 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp802 = panda$core$Int64$convert$R$panda$core$UInt64($tmp801);
if ($tmp800) goto block128; else goto block129;
block128:;
int64_t $tmp803 = $tmp797.value;
int64_t $tmp804 = $tmp798.value;
bool $tmp805 = $tmp803 <= $tmp804;
panda$core$Bit $tmp806 = (panda$core$Bit) {$tmp805};
bool $tmp807 = $tmp806.value;
if ($tmp807) goto block125; else goto block126;
block129:;
int64_t $tmp808 = $tmp797.value;
int64_t $tmp809 = $tmp798.value;
bool $tmp810 = $tmp808 < $tmp809;
panda$core$Bit $tmp811 = (panda$core$Bit) {$tmp810};
bool $tmp812 = $tmp811.value;
if ($tmp812) goto block125; else goto block126;
block125:;
// line 290
panda$threads$MessageQueue* $tmp813 = *(&local23);
panda$core$Immutable* $tmp814 = panda$threads$MessageQueue$getMessage$R$panda$threads$MessageQueue$T($tmp813);
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Compiler$Error*) $tmp814)));
org$pandalanguage$pandac$Compiler$Error* $tmp815 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp815));
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) $tmp814);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
// unreffing REF($1241:panda.threads.MessageQueue.T)
// line 291
org$pandalanguage$pandac$Compiler$Error* $tmp816 = *(&local29);
panda$io$File** $tmp817 = &$tmp816->file;
panda$io$File* $tmp818 = *$tmp817;
panda$core$String* $tmp819 = panda$io$File$get_name$R$panda$core$String($tmp818);
panda$core$String* $tmp820 = panda$core$String$convert$R$panda$core$String($tmp819);
panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp820, &$s822);
org$pandalanguage$pandac$Compiler$Error* $tmp823 = *(&local29);
org$pandalanguage$pandac$Position* $tmp824 = &$tmp823->position;
org$pandalanguage$pandac$Position $tmp825 = *$tmp824;
org$pandalanguage$pandac$Position$wrapper* $tmp826;
$tmp826 = (org$pandalanguage$pandac$Position$wrapper*) frostObjectAlloc(32, (panda$core$Class*) &org$pandalanguage$pandac$Position$wrapperclass);
$tmp826->value = $tmp825;
panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp821, ((panda$core$Object*) $tmp826));
panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp827, &$s829);
org$pandalanguage$pandac$Compiler$Error* $tmp830 = *(&local29);
panda$core$String** $tmp831 = &$tmp830->message;
panda$core$String* $tmp832 = *$tmp831;
panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp828, $tmp832);
panda$core$String* $tmp834 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp833, &$s835);
panda$io$Console$printLine$panda$core$String($tmp834);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
// unreffing REF($1270:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
// unreffing REF($1269:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
// unreffing REF($1265:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
// unreffing REF($1264:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp826));
// unreffing REF($1263:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($1259:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing REF($1258:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
// unreffing REF($1257:panda.core.String)
org$pandalanguage$pandac$Compiler$Error* $tmp836 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing error
*(&local29) = ((org$pandalanguage$pandac$Compiler$Error*) NULL);
goto block127;
block127:;
panda$core$Int64 $tmp837 = *(&local28);
int64_t $tmp838 = $tmp798.value;
int64_t $tmp839 = $tmp837.value;
int64_t $tmp840 = $tmp838 - $tmp839;
panda$core$Int64 $tmp841 = (panda$core$Int64) {$tmp840};
panda$core$UInt64 $tmp842 = panda$core$Int64$convert$R$panda$core$UInt64($tmp841);
if ($tmp800) goto block131; else goto block132;
block131:;
uint64_t $tmp843 = $tmp842.value;
uint64_t $tmp844 = $tmp802.value;
bool $tmp845 = $tmp843 >= $tmp844;
panda$core$Bit $tmp846 = (panda$core$Bit) {$tmp845};
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block130; else goto block126;
block132:;
uint64_t $tmp848 = $tmp842.value;
uint64_t $tmp849 = $tmp802.value;
bool $tmp850 = $tmp848 > $tmp849;
panda$core$Bit $tmp851 = (panda$core$Bit) {$tmp850};
bool $tmp852 = $tmp851.value;
if ($tmp852) goto block130; else goto block126;
block130:;
int64_t $tmp853 = $tmp837.value;
int64_t $tmp854 = $tmp801.value;
int64_t $tmp855 = $tmp853 + $tmp854;
panda$core$Int64 $tmp856 = (panda$core$Int64) {$tmp855};
*(&local28) = $tmp856;
goto block125;
block126:;
org$pandalanguage$pandac$Compiler* $tmp857 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// unreffing compiler
*(&local24) = ((org$pandalanguage$pandac$Compiler*) NULL);
panda$threads$MessageQueue* $tmp858 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing errorQueue
*(&local23) = ((panda$threads$MessageQueue*) NULL);
org$pandalanguage$pandac$Compiler$Settings* $tmp859 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp859));
// unreffing settings
*(&local22) = ((org$pandalanguage$pandac$Compiler$Settings*) NULL);
org$pandalanguage$pandac$CodeGenerator* $tmp860 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp860));
// unreffing cg
*(&local21) = ((org$pandalanguage$pandac$CodeGenerator*) NULL);
// line 294
panda$core$Int64 $tmp861 = *(&local20);
panda$core$Int64 $tmp862 = (panda$core$Int64) {0};
panda$core$Bit $tmp863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp861, $tmp862);
bool $tmp864 = $tmp863.value;
if ($tmp864) goto block133; else goto block135;
block133:;
// line 295
org$pandalanguage$pandac$Main$Format$nullable $tmp865 = *(&local6);
panda$core$Bit $tmp866 = panda$core$Bit$init$builtin_bit($tmp865.nonnull);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block136; else goto block137;
block137:;
panda$core$Int64 $tmp868 = (panda$core$Int64) {295};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s869, $tmp868, &$s870);
abort(); // unreachable
block136:;
panda$core$Int64 $tmp871 = ((org$pandalanguage$pandac$Main$Format) $tmp865.value).$rawValue;
panda$core$Int64 $tmp872 = (panda$core$Int64) {1};
panda$core$Bit $tmp873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp871, $tmp872);
bool $tmp874 = $tmp873.value;
if ($tmp874) goto block139; else goto block140;
block139:;
// line 297
panda$io$File* $tmp875 = *(&local3);
panda$core$Bit $tmp876 = panda$core$Bit$init$builtin_bit($tmp875 != NULL);
bool $tmp877 = $tmp876.value;
if ($tmp877) goto block141; else goto block142;
block142:;
panda$core$Int64 $tmp878 = (panda$core$Int64) {297};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s879, $tmp878, &$s880);
abort(); // unreachable
block141:;
panda$io$File* $tmp881 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp875, &$s882);
panda$io$File* $tmp883 = *(&local3);
panda$core$Bit $tmp884 = panda$core$Bit$init$builtin_bit($tmp883 != NULL);
bool $tmp885 = $tmp884.value;
if ($tmp885) goto block143; else goto block144;
block144:;
panda$core$Int64 $tmp886 = (panda$core$Int64) {297};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s887, $tmp886, &$s888);
abort(); // unreachable
block143:;
panda$core$Bit $tmp889 = *(&local8);
panda$io$File* $tmp890 = org$pandalanguage$pandac$Main$toExecutable$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp881, $tmp883, $tmp889);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing REF($1389:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp881));
// unreffing REF($1378:panda.io.File)
goto block138;
block140:;
panda$core$Int64 $tmp891 = (panda$core$Int64) {2};
panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp871, $tmp891);
bool $tmp893 = $tmp892.value;
if ($tmp893) goto block145; else goto block138;
block145:;
// line 300
panda$io$File* $tmp894 = *(&local3);
panda$core$Bit $tmp895 = panda$core$Bit$init$builtin_bit($tmp894 != NULL);
bool $tmp896 = $tmp895.value;
if ($tmp896) goto block146; else goto block147;
block147:;
panda$core$Int64 $tmp897 = (panda$core$Int64) {300};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s898, $tmp897, &$s899);
abort(); // unreachable
block146:;
panda$io$File* $tmp900 = panda$io$File$changeExtension$panda$core$String$R$panda$io$File($tmp894, &$s901);
panda$io$File* $tmp902 = *(&local3);
panda$core$Bit $tmp903 = panda$core$Bit$init$builtin_bit($tmp902 != NULL);
bool $tmp904 = $tmp903.value;
if ($tmp904) goto block148; else goto block149;
block149:;
panda$core$Int64 $tmp905 = (panda$core$Int64) {300};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s906, $tmp905, &$s907);
abort(); // unreachable
block148:;
panda$core$Bit $tmp908 = *(&local8);
panda$io$File* $tmp909 = org$pandalanguage$pandac$Main$toObject$panda$io$File$panda$io$File$panda$core$Bit$R$panda$io$File(param0, $tmp900, $tmp902, $tmp908);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($1422:panda.io.File)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
// unreffing REF($1411:panda.io.File)
goto block138;
block138:;
goto block134;
block135:;
// line 1
// line 305
panda$core$Int64 $tmp910 = *(&local20);
panda$core$Int64 $tmp911 = (panda$core$Int64) {1};
panda$core$Bit $tmp912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp910, $tmp911);
bool $tmp913 = $tmp912.value;
if ($tmp913) goto block150; else goto block152;
block150:;
// line 306
panda$io$Console$printLine$panda$core$String(&$s914);
goto block151;
block152:;
// line 1
// line 309
panda$core$Int64 $tmp915 = *(&local20);
panda$core$String* $tmp916 = panda$core$Int64$convert$R$panda$core$String($tmp915);
panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp916, &$s918);
panda$io$Console$printLine$panda$core$String($tmp917);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp917));
// unreffing REF($1445:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing REF($1444:panda.core.String)
goto block151;
block151:;
// line 311
panda$core$UInt8 $tmp919 = (panda$core$UInt8) {1};
panda$core$System$exit$panda$core$UInt8($tmp919);
goto block134;
block134:;
panda$io$File* $tmp920 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing llvmDir
*(&local18) = ((panda$io$File*) NULL);
panda$io$OutputStream* $tmp921 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing err
*(&local9) = ((panda$io$OutputStream*) NULL);
panda$core$String* $tmp922 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing root
*(&local7) = ((panda$core$String*) NULL);
panda$io$File* $tmp923 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing outFile
*(&local3) = ((panda$io$File*) NULL);
panda$collections$Array* $tmp924 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing imports
*(&local2) = ((panda$collections$Array*) NULL);
panda$collections$Array* $tmp925 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp925));
// unreffing sources
*(&local1) = ((panda$collections$Array*) NULL);
org$pandalanguage$pandac$Main$Arguments* $tmp926 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp926));
// unreffing args
*(&local0) = ((org$pandalanguage$pandac$Main$Arguments*) NULL);
return;

}
panda$core$Bit org$pandalanguage$pandac$Main$containsError$panda$core$String$R$panda$core$Bit(panda$core$String* param0) {

// line 317
panda$core$Bit $tmp927 = panda$core$String$contains$panda$core$String$R$panda$core$Bit(param0, &$s928);
return $tmp927;

}
void frostMain(panda$collections$ListView* param0) {

// line 322
org$pandalanguage$pandac$Main* $tmp929 = (org$pandalanguage$pandac$Main*) frostObjectAlloc(33, (panda$core$Class*) &org$pandalanguage$pandac$Main$class);
org$pandalanguage$pandac$Main$init($tmp929);
org$pandalanguage$pandac$Main$run$panda$collections$ListView$LTpanda$core$String$GT($tmp929, param0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($1:org.pandalanguage.pandac.Main)
return;

}
void org$pandalanguage$pandac$Main$cleanup(org$pandalanguage$pandac$Main* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
panda$io$File** $tmp930 = &param0->clang;
panda$io$File* $tmp931 = *$tmp930;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$io$File** $tmp932 = &param0->srcDir;
panda$io$File* $tmp933 = *$tmp932;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
return;

}

