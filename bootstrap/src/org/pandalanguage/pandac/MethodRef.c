#include "org/pandalanguage/pandac/MethodRef.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Type.h"
#include "org/pandalanguage/pandac/MethodDecl.h"
#include "panda/collections/ListView.h"
#include "panda/core/Bit.h"
#include "panda/collections/Array.h"
#include "org/pandalanguage/pandac/Type/Kind.h"
#include "panda/collections/HashMap.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Compiler/Resolution.h"
#include "panda/core/Equatable.h"
#include "panda/core/Panda.h"
#include "panda/core/Weak.h"
#include "org/pandalanguage/pandac/ClassDecl.h"
#include "org/pandalanguage/pandac/Annotations.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "panda/collections/CollectionView.h"
#include "panda/core/Range.LTpanda/core/Int64.GT.h"
#include "org/pandalanguage/pandac/Symbol.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/GenericParameter.h"
#include "panda/collections/Key.h"


static panda$core$String $s1;
org$pandalanguage$pandac$MethodRef$class_type org$pandalanguage$pandac$MethodRef$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String, org$pandalanguage$pandac$MethodRef$cleanup, org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64, org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type, org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type} };

typedef panda$core$Bit (*$fn10)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Bit (*$fn65)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn104)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn115)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Bit (*$fn158)(panda$core$Equatable*, panda$core$Equatable*);
typedef panda$core$Int64 (*$fn202)(panda$collections$CollectionView*);
typedef panda$collections$ListView* (*$fn213)(panda$collections$ListView*, panda$core$Range$LTpanda$core$Int64$GT);
typedef panda$core$Int64 (*$fn256)(panda$collections$CollectionView*);
typedef panda$core$Object* (*$fn298)(panda$collections$ListView*, panda$core$Int64);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x52\x65\x66", 34, -1882581302938845728, NULL };
static panda$core$String $s14 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s38 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x69\x6e\x64\x54\x79\x70\x65\x28", 9, 2209574360715635276, NULL };
static panda$core$String $s40 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s48 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x20\x66\x61\x69\x6c\x65\x64", 8, 15259372878142387, NULL };
static panda$core$String $s49 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s80 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s81 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s91 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s92 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 162, 9213235392469580769, NULL };
static panda$core$String $s100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s101 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 162, 9213235392469580769, NULL };
static panda$core$String $s198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 137, -3621091859119661460, NULL };
static panda$core$String $s226 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x27", 97, -9197273436163138645, NULL };
static panda$core$String $s239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x43\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x56\x69\x65\x77\x27", 128, 3585767492644316718, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x4d\x65\x74\x68\x6f\x64\x44\x65\x63\x6c\x2e\x47\x65\x6e\x65\x72\x69\x63\x50\x61\x72\x61\x6d\x65\x74\x65\x72\x3e\x27", 193, 4605233986127440889, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x70\x61\x6e\x64\x61\x2e\x63\x6f\x6c\x6c\x65\x63\x74\x69\x6f\x6e\x73\x2e\x4c\x69\x73\x74\x56\x69\x65\x77\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 153, 283066375660647851, NULL };
static panda$core$String $s345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x2e\x66\x72\x6f\x73\x74", 15, 3211813928529461499, NULL };
static panda$core$String $s346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x65\x78\x70\x65\x63\x74\x65\x64\x20\x6e\x75\x6c\x6c\x20\x76\x61\x6c\x75\x65\x20\x63\x61\x73\x74\x69\x6e\x67\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x3f\x27\x20\x74\x6f\x20\x27\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x46\x69\x78\x65\x64\x41\x72\x72\x61\x79\x3c\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x54\x79\x70\x65\x3e\x27", 171, 8670533100224572843, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x4d\x65\x74\x68\x6f\x64\x52\x65\x66\x28", 10, -7131972655011641641, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };

void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3) {

// line 28
org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(param0, param1, param2, param3, ((panda$collections$ListView*) NULL));
return;

}
void org$pandalanguage$pandac$MethodRef$init$org$pandalanguage$pandac$Compiler$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodDecl$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$Q(org$pandalanguage$pandac$MethodRef* param0, org$pandalanguage$pandac$Compiler* param1, org$pandalanguage$pandac$Type* param2, org$pandalanguage$pandac$MethodDecl* param3, panda$collections$ListView* param4) {

panda$core$Bit local0;
org$pandalanguage$pandac$Type* local1 = NULL;
org$pandalanguage$pandac$Type* local2 = NULL;
panda$core$Bit local3;
panda$core$Bit local4;
panda$collections$Array* local5 = NULL;
org$pandalanguage$pandac$Type$Kind local6;
panda$core$Bit local7;
org$pandalanguage$pandac$Type$Kind local8;
org$pandalanguage$pandac$Type* local9 = NULL;
panda$core$String* local10 = NULL;
panda$collections$HashMap* local11 = NULL;
panda$core$Int64 local12;
// line 35
org$pandalanguage$pandac$Compiler$Resolution* $tmp2 = &param3->resolved;
org$pandalanguage$pandac$Compiler$Resolution $tmp3 = *$tmp2;
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp4;
$tmp4 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp4->value = $tmp3;
panda$core$Int64 $tmp5 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Compiler$Resolution $tmp6 = org$pandalanguage$pandac$Compiler$Resolution$init$panda$core$Int64($tmp5);
org$pandalanguage$pandac$Compiler$Resolution$wrapper* $tmp7;
$tmp7 = (org$pandalanguage$pandac$Compiler$Resolution$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$Compiler$Resolution$wrapperclass);
$tmp7->value = $tmp6;
ITable* $tmp8 = ((panda$core$Equatable*) $tmp4)->$class->itable;
while ($tmp8->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp8 = $tmp8->next;
}
$fn10 $tmp9 = $tmp8->methods[1];
panda$core$Bit $tmp11 = $tmp9(((panda$core$Equatable*) $tmp4), ((panda$core$Equatable*) $tmp7));
bool $tmp12 = $tmp11.value;
if ($tmp12) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp13 = (panda$core$Int64) {35};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s14, $tmp13);
abort(); // unreachable
block1:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp7)));
// unreffing REF($7:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp4)));
// unreffing REF($3:panda.core.Equatable<org.pandalanguage.pandac.Compiler.Resolution>)
// line 36
panda$core$Bit $tmp15 = panda$core$Bit$init$builtin_bit(param4 == NULL);
bool $tmp16 = $tmp15.value;
if ($tmp16) goto block3; else goto block4;
block3:;
panda$collections$Array** $tmp17 = &param3->genericParameters;
panda$collections$Array* $tmp18 = *$tmp17;
panda$core$Bit $tmp19 = panda$core$Bit$init$builtin_bit($tmp18 != NULL);
*(&local0) = $tmp19;
goto block5;
block4:;
*(&local0) = $tmp15;
goto block5;
block5:;
panda$core$Bit $tmp20 = *(&local0);
panda$core$Bit* $tmp21 = &param0->requiresTypeInference;
*$tmp21 = $tmp20;
// line 37
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$MethodDecl** $tmp22 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp23 = *$tmp22;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp23));
org$pandalanguage$pandac$MethodDecl** $tmp24 = &param0->value;
*$tmp24 = param3;
// line 38
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$Type** $tmp25 = &param0->target;
org$pandalanguage$pandac$Type* $tmp26 = *$tmp25;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp26));
org$pandalanguage$pandac$Type** $tmp27 = &param0->target;
*$tmp27 = param2;
// line 39
panda$core$Weak** $tmp28 = &param3->owner;
panda$core$Weak* $tmp29 = *$tmp28;
panda$core$Object* $tmp30 = panda$core$Weak$get$R$panda$core$Weak$T($tmp29);
org$pandalanguage$pandac$Type* $tmp31 = org$pandalanguage$pandac$Compiler$findType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$ClassDecl$R$org$pandalanguage$pandac$Type$Q(param1, param2, ((org$pandalanguage$pandac$ClassDecl*) $tmp30));
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
org$pandalanguage$pandac$Type* $tmp32 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp32));
*(&local1) = $tmp31;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp31));
// unreffing REF($61:org.pandalanguage.pandac.Type?)
panda$core$Panda$unref$panda$core$Object$Q($tmp30);
// unreffing REF($59:panda.core.Weak.T)
// line 40
org$pandalanguage$pandac$Type* $tmp33 = *(&local1);
panda$core$Bit $tmp34 = panda$core$Bit$init$builtin_bit($tmp33 != NULL);
bool $tmp35 = $tmp34.value;
if ($tmp35) goto block6; else goto block7;
block7:;
panda$core$Int64 $tmp36 = (panda$core$Int64) {40};
panda$core$String* $tmp37 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s38, ((panda$core$Object*) param2));
panda$core$String* $tmp39 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp37, &$s40);
panda$core$Weak** $tmp41 = &param3->owner;
panda$core$Weak* $tmp42 = *$tmp41;
panda$core$Object* $tmp43 = panda$core$Weak$get$R$panda$core$Weak$T($tmp42);
panda$core$String** $tmp44 = &((org$pandalanguage$pandac$ClassDecl*) $tmp43)->name;
panda$core$String* $tmp45 = *$tmp44;
panda$core$String* $tmp46 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp39, $tmp45);
panda$core$String* $tmp47 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp46, &$s48);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s49, $tmp36, $tmp47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp47));
// unreffing REF($93:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp46));
// unreffing REF($92:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp43);
// unreffing REF($88:panda.core.Weak.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp39));
// unreffing REF($84:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp37));
// unreffing REF($83:panda.core.String)
abort(); // unreachable
block6:;
// line 41
org$pandalanguage$pandac$Type* $tmp50 = org$pandalanguage$pandac$MethodDecl$get_type$R$org$pandalanguage$pandac$Type(param3);
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
org$pandalanguage$pandac$Type* $tmp51 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp51));
*(&local2) = $tmp50;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp50));
// unreffing REF($112:org.pandalanguage.pandac.Type)
// line 42
org$pandalanguage$pandac$Annotations** $tmp52 = &param3->annotations;
org$pandalanguage$pandac$Annotations* $tmp53 = *$tmp52;
panda$core$Bit $tmp54 = org$pandalanguage$pandac$Annotations$get_isClass$R$panda$core$Bit($tmp53);
panda$core$Bit $tmp55 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp54);
bool $tmp56 = $tmp55.value;
if ($tmp56) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp57 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp58 = *$tmp57;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp59;
$tmp59 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp59->value = $tmp58;
panda$core$Int64 $tmp60 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp61 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp60);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp62;
$tmp62 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp62->value = $tmp61;
ITable* $tmp63 = ((panda$core$Equatable*) $tmp59)->$class->itable;
while ($tmp63->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp63 = $tmp63->next;
}
$fn65 $tmp64 = $tmp63->methods[1];
panda$core$Bit $tmp66 = $tmp64(((panda$core$Equatable*) $tmp59), ((panda$core$Equatable*) $tmp62));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp62)));
// unreffing REF($136:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp59)));
// unreffing REF($132:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local4) = $tmp66;
goto block12;
block11:;
*(&local4) = $tmp55;
goto block12;
block12:;
panda$core$Bit $tmp67 = *(&local4);
bool $tmp68 = $tmp67.value;
if ($tmp68) goto block13; else goto block14;
block13:;
panda$core$Bit $tmp69 = org$pandalanguage$pandac$Type$get_isClassLiteral$R$panda$core$Bit(param2);
*(&local3) = $tmp69;
goto block15;
block14:;
*(&local3) = $tmp67;
goto block15;
block15:;
panda$core$Bit $tmp70 = *(&local3);
bool $tmp71 = $tmp70.value;
if ($tmp71) goto block8; else goto block16;
block8:;
// line 44
panda$collections$Array* $tmp72 = (panda$collections$Array*) frostObjectAlloc(40, (panda$core$Class*) &panda$collections$Array$class);
panda$collections$Array$init($tmp72);
*(&local5) = ((panda$collections$Array*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
panda$collections$Array* $tmp73 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp73));
*(&local5) = $tmp72;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp72));
// unreffing REF($161:panda.collections.Array<org.pandalanguage.pandac.Type>)
// line 45
panda$collections$Array* $tmp74 = *(&local5);
org$pandalanguage$pandac$FixedArray** $tmp75 = &param2->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp76 = *$tmp75;
panda$core$Bit $tmp77 = panda$core$Bit$init$builtin_bit($tmp76 != NULL);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block17; else goto block18;
block18:;
panda$core$Int64 $tmp79 = (panda$core$Int64) {45};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s80, $tmp79, &$s81);
abort(); // unreachable
block17:;
panda$core$Int64 $tmp82 = (panda$core$Int64) {1};
panda$core$Object* $tmp83 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp76, $tmp82);
panda$collections$Array$add$panda$collections$Array$T($tmp74, ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp83)));
panda$core$Panda$unref$panda$core$Object$Q($tmp83);
// unreffing REF($189:org.pandalanguage.pandac.FixedArray.T)
// line 46
panda$collections$Array* $tmp84 = *(&local5);
org$pandalanguage$pandac$Type* $tmp85 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp86 = &$tmp85->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp87 = *$tmp86;
panda$core$Bit $tmp88 = panda$core$Bit$init$builtin_bit($tmp87 != NULL);
bool $tmp89 = $tmp88.value;
if ($tmp89) goto block19; else goto block20;
block20:;
panda$core$Int64 $tmp90 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s91, $tmp90, &$s92);
abort(); // unreachable
block19:;
panda$core$Int64 $tmp93 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp94 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp95 = &$tmp94->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp96 = *$tmp95;
panda$core$Bit $tmp97 = panda$core$Bit$init$builtin_bit($tmp96 != NULL);
bool $tmp98 = $tmp97.value;
if ($tmp98) goto block21; else goto block22;
block22:;
panda$core$Int64 $tmp99 = (panda$core$Int64) {46};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s100, $tmp99, &$s101);
abort(); // unreachable
block21:;
ITable* $tmp102 = ((panda$collections$CollectionView*) $tmp96)->$class->itable;
while ($tmp102->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp102 = $tmp102->next;
}
$fn104 $tmp103 = $tmp102->methods[0];
panda$core$Int64 $tmp105 = $tmp103(((panda$collections$CollectionView*) $tmp96));
panda$core$Int64 $tmp106 = (panda$core$Int64) {1};
int64_t $tmp107 = $tmp105.value;
int64_t $tmp108 = $tmp106.value;
int64_t $tmp109 = $tmp107 - $tmp108;
panda$core$Int64 $tmp110 = (panda$core$Int64) {$tmp109};
panda$core$Bit $tmp111 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp112 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp93, $tmp110, $tmp111);
ITable* $tmp113 = ((panda$collections$ListView*) $tmp87)->$class->itable;
while ($tmp113->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp113 = $tmp113->next;
}
$fn115 $tmp114 = $tmp113->methods[1];
panda$collections$ListView* $tmp116 = $tmp114(((panda$collections$ListView*) $tmp87), $tmp112);
panda$collections$Array$addAll$panda$collections$CollectionView$LTpanda$collections$Array$T$GT($tmp84, ((panda$collections$CollectionView*) $tmp116));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp116));
// unreffing REF($233:panda.collections.ListView<panda.collections.ListView.T>)
// line 47
// line 48
org$pandalanguage$pandac$MethodDecl$Kind* $tmp117 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp118 = *$tmp117;
panda$core$Int64 $tmp119 = $tmp118.$rawValue;
panda$core$Int64 $tmp120 = (panda$core$Int64) {0};
panda$core$Bit $tmp121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp119, $tmp120);
bool $tmp122 = $tmp121.value;
if ($tmp122) goto block24; else goto block25;
block24:;
// line 50
panda$core$Int64 $tmp123 = (panda$core$Int64) {18};
org$pandalanguage$pandac$Type$Kind $tmp124 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp123);
*(&local6) = $tmp124;
goto block23;
block25:;
panda$core$Int64 $tmp125 = (panda$core$Int64) {1};
panda$core$Bit $tmp126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp119, $tmp125);
bool $tmp127 = $tmp126.value;
if ($tmp127) goto block26; else goto block27;
block26:;
// line 53
panda$core$Int64 $tmp128 = (panda$core$Int64) {17};
org$pandalanguage$pandac$Type$Kind $tmp129 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp128);
*(&local6) = $tmp129;
goto block23;
block27:;
// line 56
panda$core$Bit $tmp130 = panda$core$Bit$init$builtin_bit(false);
bool $tmp131 = $tmp130.value;
if ($tmp131) goto block28; else goto block29;
block29:;
panda$core$Int64 $tmp132 = (panda$core$Int64) {56};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s133, $tmp132);
abort(); // unreachable
block28:;
goto block23;
block23:;
// line 59
org$pandalanguage$pandac$Type* $tmp134 = *(&local2);
org$pandalanguage$pandac$Position* $tmp135 = &((org$pandalanguage$pandac$Symbol*) $tmp134)->position;
org$pandalanguage$pandac$Position $tmp136 = *$tmp135;
org$pandalanguage$pandac$Type$Kind $tmp137 = *(&local6);
panda$collections$Array* $tmp138 = *(&local5);
org$pandalanguage$pandac$Type* $tmp139 = *(&local2);
org$pandalanguage$pandac$Type* $tmp140 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp139);
org$pandalanguage$pandac$Type* $tmp141 = *(&local2);
panda$core$Int64* $tmp142 = &$tmp141->priority;
panda$core$Int64 $tmp143 = *$tmp142;
org$pandalanguage$pandac$Type* $tmp144 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp136, $tmp137, ((panda$collections$ListView*) $tmp138), $tmp140, $tmp143);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
org$pandalanguage$pandac$Type* $tmp145 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp145));
*(&local2) = $tmp144;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp144));
// unreffing REF($285:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp140));
// unreffing REF($281:org.pandalanguage.pandac.Type)
panda$collections$Array* $tmp146 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp146));
// unreffing parameterTypes
*(&local5) = ((panda$collections$Array*) NULL);
goto block9;
block16:;
// line 62
panda$core$Bit $tmp147 = org$pandalanguage$pandac$Compiler$isImmutable$org$pandalanguage$pandac$Type$R$panda$core$Bit(param1, param2);
panda$core$Bit $tmp148 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp147);
bool $tmp149 = $tmp148.value;
if ($tmp149) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp150 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp151 = *$tmp150;
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp152;
$tmp152 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp152->value = $tmp151;
panda$core$Int64 $tmp153 = (panda$core$Int64) {2};
org$pandalanguage$pandac$MethodDecl$Kind $tmp154 = org$pandalanguage$pandac$MethodDecl$Kind$init$panda$core$Int64($tmp153);
org$pandalanguage$pandac$MethodDecl$Kind$wrapper* $tmp155;
$tmp155 = (org$pandalanguage$pandac$MethodDecl$Kind$wrapper*) frostObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$MethodDecl$Kind$wrapperclass);
$tmp155->value = $tmp154;
ITable* $tmp156 = ((panda$core$Equatable*) $tmp152)->$class->itable;
while ($tmp156->$class != (panda$core$Class*) &panda$core$Equatable$class) {
    $tmp156 = $tmp156->next;
}
$fn158 $tmp157 = $tmp156->methods[1];
panda$core$Bit $tmp159 = $tmp157(((panda$core$Equatable*) $tmp152), ((panda$core$Equatable*) $tmp155));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp155)));
// unreffing REF($315:panda.core.Equatable.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) ((panda$core$Equatable*) $tmp152)));
// unreffing REF($311:panda.core.Equatable<org.pandalanguage.pandac.MethodDecl.Kind>)
*(&local7) = $tmp159;
goto block34;
block33:;
*(&local7) = $tmp148;
goto block34;
block34:;
panda$core$Bit $tmp160 = *(&local7);
bool $tmp161 = $tmp160.value;
if ($tmp161) goto block30; else goto block31;
block30:;
// line 63
// line 64
org$pandalanguage$pandac$MethodDecl$Kind* $tmp162 = &param3->methodKind;
org$pandalanguage$pandac$MethodDecl$Kind $tmp163 = *$tmp162;
panda$core$Int64 $tmp164 = $tmp163.$rawValue;
panda$core$Int64 $tmp165 = (panda$core$Int64) {0};
panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, $tmp165);
bool $tmp167 = $tmp166.value;
if ($tmp167) goto block36; else goto block37;
block36:;
// line 66
panda$core$Int64 $tmp168 = (panda$core$Int64) {16};
org$pandalanguage$pandac$Type$Kind $tmp169 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp168);
*(&local8) = $tmp169;
goto block35;
block37:;
panda$core$Int64 $tmp170 = (panda$core$Int64) {1};
panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp164, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block38; else goto block39;
block38:;
// line 69
panda$core$Int64 $tmp173 = (panda$core$Int64) {15};
org$pandalanguage$pandac$Type$Kind $tmp174 = org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64($tmp173);
*(&local8) = $tmp174;
goto block35;
block39:;
// line 72
panda$core$Bit $tmp175 = panda$core$Bit$init$builtin_bit(false);
bool $tmp176 = $tmp175.value;
if ($tmp176) goto block40; else goto block41;
block41:;
panda$core$Int64 $tmp177 = (panda$core$Int64) {72};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s178, $tmp177);
abort(); // unreachable
block40:;
goto block35;
block35:;
// line 75
org$pandalanguage$pandac$Type* $tmp179 = *(&local2);
org$pandalanguage$pandac$Position* $tmp180 = &((org$pandalanguage$pandac$Symbol*) $tmp179)->position;
org$pandalanguage$pandac$Position $tmp181 = *$tmp180;
org$pandalanguage$pandac$Type$Kind $tmp182 = *(&local8);
org$pandalanguage$pandac$Type* $tmp183 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp184 = &$tmp183->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp185 = *$tmp184;
panda$core$Bit $tmp186 = panda$core$Bit$init$builtin_bit($tmp185 != NULL);
bool $tmp187 = $tmp186.value;
if ($tmp187) goto block42; else goto block43;
block43:;
panda$core$Int64 $tmp188 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s189, $tmp188, &$s190);
abort(); // unreachable
block42:;
panda$core$Int64 $tmp191 = (panda$core$Int64) {0};
org$pandalanguage$pandac$Type* $tmp192 = *(&local2);
org$pandalanguage$pandac$FixedArray** $tmp193 = &$tmp192->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp194 = *$tmp193;
panda$core$Bit $tmp195 = panda$core$Bit$init$builtin_bit($tmp194 != NULL);
bool $tmp196 = $tmp195.value;
if ($tmp196) goto block44; else goto block45;
block45:;
panda$core$Int64 $tmp197 = (panda$core$Int64) {76};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s198, $tmp197, &$s199);
abort(); // unreachable
block44:;
ITable* $tmp200 = ((panda$collections$CollectionView*) $tmp194)->$class->itable;
while ($tmp200->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp200 = $tmp200->next;
}
$fn202 $tmp201 = $tmp200->methods[0];
panda$core$Int64 $tmp203 = $tmp201(((panda$collections$CollectionView*) $tmp194));
panda$core$Int64 $tmp204 = (panda$core$Int64) {1};
int64_t $tmp205 = $tmp203.value;
int64_t $tmp206 = $tmp204.value;
int64_t $tmp207 = $tmp205 - $tmp206;
panda$core$Int64 $tmp208 = (panda$core$Int64) {$tmp207};
panda$core$Bit $tmp209 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp210 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp191, $tmp208, $tmp209);
ITable* $tmp211 = ((panda$collections$ListView*) $tmp185)->$class->itable;
while ($tmp211->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp211 = $tmp211->next;
}
$fn213 $tmp212 = $tmp211->methods[1];
panda$collections$ListView* $tmp214 = $tmp212(((panda$collections$ListView*) $tmp185), $tmp210);
org$pandalanguage$pandac$Type* $tmp215 = *(&local2);
org$pandalanguage$pandac$Type* $tmp216 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp215);
org$pandalanguage$pandac$Type* $tmp217 = *(&local2);
panda$core$Int64* $tmp218 = &$tmp217->priority;
panda$core$Int64 $tmp219 = *$tmp218;
org$pandalanguage$pandac$Type* $tmp220 = org$pandalanguage$pandac$Type$methodType$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$Kind$panda$collections$ListView$LTorg$pandalanguage$pandac$Type$GT$org$pandalanguage$pandac$Type$panda$core$Int64$R$org$pandalanguage$pandac$Type($tmp181, $tmp182, $tmp214, $tmp216, $tmp219);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
org$pandalanguage$pandac$Type* $tmp221 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp221));
*(&local2) = $tmp220;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp220));
// unreffing REF($409:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp216));
// unreffing REF($405:org.pandalanguage.pandac.Type)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp214));
// unreffing REF($402:panda.collections.ListView<panda.collections.ListView.T>)
goto block31;
block31:;
goto block9;
block9:;
// line 79
org$pandalanguage$pandac$Type* $tmp222 = *(&local1);
panda$core$Bit $tmp223 = panda$core$Bit$init$builtin_bit($tmp222 != NULL);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block46; else goto block47;
block47:;
panda$core$Int64 $tmp225 = (panda$core$Int64) {79};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s226, $tmp225, &$s227);
abort(); // unreachable
block46:;
org$pandalanguage$pandac$Type* $tmp228 = *(&local2);
org$pandalanguage$pandac$Type* $tmp229 = org$pandalanguage$pandac$Compiler$remapType$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$Type$R$org$pandalanguage$pandac$Type(param1, $tmp222, $tmp228);
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
org$pandalanguage$pandac$Type* $tmp230 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp230));
*(&local9) = $tmp229;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp229));
// unreffing REF($438:org.pandalanguage.pandac.Type)
// line 80
panda$core$Bit $tmp231 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp232 = $tmp231.value;
if ($tmp232) goto block48; else goto block50;
block48:;
// line 81
panda$core$Weak** $tmp233 = &param3->owner;
panda$core$Weak* $tmp234 = *$tmp233;
panda$core$Object* $tmp235 = panda$core$Weak$get$R$panda$core$Weak$T($tmp234);
panda$core$String** $tmp236 = &((org$pandalanguage$pandac$ClassDecl*) $tmp235)->name;
panda$core$String* $tmp237 = *$tmp236;
panda$core$String* $tmp238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp237, &$s239);
panda$core$String** $tmp240 = &((org$pandalanguage$pandac$Symbol*) param3)->name;
panda$core$String* $tmp241 = *$tmp240;
panda$core$String* $tmp242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp238, $tmp241);
panda$core$String* $tmp243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp242, &$s244);
*(&local10) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
panda$core$String* $tmp245 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp245));
*(&local10) = $tmp243;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp243));
// unreffing REF($467:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp242));
// unreffing REF($466:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp238));
// unreffing REF($462:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp235);
// unreffing REF($458:panda.core.Weak.T)
// line 82
panda$collections$HashMap* $tmp246 = (panda$collections$HashMap*) frostObjectAlloc(56, (panda$core$Class*) &panda$collections$HashMap$class);
panda$collections$HashMap$init($tmp246);
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
panda$collections$HashMap* $tmp247 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp247));
*(&local11) = $tmp246;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp246));
// unreffing REF($488:panda.collections.HashMap<panda.core.String, org.pandalanguage.pandac.Type>)
// line 83
panda$core$Int64 $tmp248 = (panda$core$Int64) {0};
panda$core$Bit $tmp249 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block51; else goto block52;
block52:;
panda$core$Int64 $tmp251 = (panda$core$Int64) {83};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s252, $tmp251, &$s253);
abort(); // unreachable
block51:;
ITable* $tmp254 = ((panda$collections$CollectionView*) param4)->$class->itable;
while ($tmp254->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp254 = $tmp254->next;
}
$fn256 $tmp255 = $tmp254->methods[0];
panda$core$Int64 $tmp257 = $tmp255(((panda$collections$CollectionView*) param4));
panda$core$Bit $tmp258 = panda$core$Bit$init$builtin_bit(false);
panda$core$Range$LTpanda$core$Int64$GT $tmp259 = panda$core$Range$LTpanda$core$Int64$GT$init$panda$core$Int64$panda$core$Int64$panda$core$Bit($tmp248, $tmp257, $tmp258);
panda$core$Int64 $tmp260 = $tmp259.min;
*(&local12) = $tmp260;
panda$core$Int64 $tmp261 = $tmp259.max;
panda$core$Bit $tmp262 = $tmp259.inclusive;
bool $tmp263 = $tmp262.value;
panda$core$Int64 $tmp264 = (panda$core$Int64) {1};
panda$core$UInt64 $tmp265 = panda$core$Int64$convert$R$panda$core$UInt64($tmp264);
if ($tmp263) goto block56; else goto block57;
block56:;
int64_t $tmp266 = $tmp260.value;
int64_t $tmp267 = $tmp261.value;
bool $tmp268 = $tmp266 <= $tmp267;
panda$core$Bit $tmp269 = (panda$core$Bit) {$tmp268};
bool $tmp270 = $tmp269.value;
if ($tmp270) goto block53; else goto block54;
block57:;
int64_t $tmp271 = $tmp260.value;
int64_t $tmp272 = $tmp261.value;
bool $tmp273 = $tmp271 < $tmp272;
panda$core$Bit $tmp274 = (panda$core$Bit) {$tmp273};
bool $tmp275 = $tmp274.value;
if ($tmp275) goto block53; else goto block54;
block53:;
// line 84
panda$collections$HashMap* $tmp276 = *(&local11);
panda$core$String* $tmp277 = *(&local10);
panda$collections$Array** $tmp278 = &param3->genericParameters;
panda$collections$Array* $tmp279 = *$tmp278;
panda$core$Bit $tmp280 = panda$core$Bit$init$builtin_bit($tmp279 != NULL);
bool $tmp281 = $tmp280.value;
if ($tmp281) goto block58; else goto block59;
block59:;
panda$core$Int64 $tmp282 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s283, $tmp282, &$s284);
abort(); // unreachable
block58:;
panda$core$Int64 $tmp285 = *(&local12);
panda$core$Object* $tmp286 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T($tmp279, $tmp285);
panda$core$String** $tmp287 = &((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodDecl$GenericParameter*) $tmp286))->name;
panda$core$String* $tmp288 = *$tmp287;
panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp277, $tmp288);
panda$core$Bit $tmp290 = panda$core$Bit$init$builtin_bit(param4 != NULL);
bool $tmp291 = $tmp290.value;
if ($tmp291) goto block60; else goto block61;
block61:;
panda$core$Int64 $tmp292 = (panda$core$Int64) {84};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s293, $tmp292, &$s294);
abort(); // unreachable
block60:;
panda$core$Int64 $tmp295 = *(&local12);
ITable* $tmp296 = param4->$class->itable;
while ($tmp296->$class != (panda$core$Class*) &panda$collections$ListView$class) {
    $tmp296 = $tmp296->next;
}
$fn298 $tmp297 = $tmp296->methods[0];
panda$core$Object* $tmp299 = $tmp297(param4, $tmp295);
panda$collections$HashMap$$IDXEQ$panda$collections$HashMap$K$panda$collections$HashMap$V($tmp276, ((panda$collections$Key*) $tmp289), ((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp299)));
panda$core$Panda$unref$panda$core$Object$Q($tmp299);
// unreffing REF($569:panda.collections.ListView.T)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp289));
// unreffing REF($556:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp286);
// unreffing REF($551:panda.collections.Array.T)
goto block55;
block55:;
panda$core$Int64 $tmp300 = *(&local12);
int64_t $tmp301 = $tmp261.value;
int64_t $tmp302 = $tmp300.value;
int64_t $tmp303 = $tmp301 - $tmp302;
panda$core$Int64 $tmp304 = (panda$core$Int64) {$tmp303};
panda$core$UInt64 $tmp305 = panda$core$Int64$convert$R$panda$core$UInt64($tmp304);
if ($tmp263) goto block63; else goto block64;
block63:;
uint64_t $tmp306 = $tmp305.value;
uint64_t $tmp307 = $tmp265.value;
bool $tmp308 = $tmp306 >= $tmp307;
panda$core$Bit $tmp309 = (panda$core$Bit) {$tmp308};
bool $tmp310 = $tmp309.value;
if ($tmp310) goto block62; else goto block54;
block64:;
uint64_t $tmp311 = $tmp305.value;
uint64_t $tmp312 = $tmp265.value;
bool $tmp313 = $tmp311 > $tmp312;
panda$core$Bit $tmp314 = (panda$core$Bit) {$tmp313};
bool $tmp315 = $tmp314.value;
if ($tmp315) goto block62; else goto block54;
block62:;
int64_t $tmp316 = $tmp300.value;
int64_t $tmp317 = $tmp264.value;
int64_t $tmp318 = $tmp316 + $tmp317;
panda$core$Int64 $tmp319 = (panda$core$Int64) {$tmp318};
*(&local12) = $tmp319;
goto block53;
block54:;
// line 86
org$pandalanguage$pandac$Type* $tmp320 = *(&local9);
panda$collections$HashMap* $tmp321 = *(&local11);
org$pandalanguage$pandac$Type* $tmp322 = org$pandalanguage$pandac$Type$remap$panda$collections$HashMap$LTpanda$core$String$Corg$pandalanguage$pandac$Type$GT$R$org$pandalanguage$pandac$Type($tmp320, $tmp321);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
org$pandalanguage$pandac$Type** $tmp323 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp324 = *$tmp323;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp324));
org$pandalanguage$pandac$Type** $tmp325 = &param0->effectiveType;
*$tmp325 = $tmp322;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
// unreffing REF($611:org.pandalanguage.pandac.Type)
panda$collections$HashMap* $tmp326 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp326));
// unreffing map
*(&local11) = ((panda$collections$HashMap*) NULL);
panda$core$String* $tmp327 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp327));
// unreffing prefix
*(&local10) = ((panda$core$String*) NULL);
goto block49;
block50:;
// line 1
// line 89
org$pandalanguage$pandac$Type* $tmp328 = *(&local9);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp328));
org$pandalanguage$pandac$Type** $tmp329 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp330 = *$tmp329;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
org$pandalanguage$pandac$Type** $tmp331 = &param0->effectiveType;
*$tmp331 = $tmp328;
goto block49;
block49:;
org$pandalanguage$pandac$Type* $tmp332 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
// unreffing effectiveType
*(&local9) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp333 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
// unreffing methodType
*(&local2) = ((org$pandalanguage$pandac$Type*) NULL);
org$pandalanguage$pandac$Type* $tmp334 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
// unreffing found
*(&local1) = ((org$pandalanguage$pandac$Type*) NULL);
return;

}
panda$core$Int64 org$pandalanguage$pandac$MethodRef$get_parameterCount$R$panda$core$Int64(org$pandalanguage$pandac$MethodRef* param0) {

// line 94
org$pandalanguage$pandac$Type** $tmp335 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp336 = *$tmp335;
panda$core$Int64 $tmp337 = org$pandalanguage$pandac$Type$get_parameterCount$R$panda$core$Int64($tmp336);
return $tmp337;

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$parameterType$panda$core$Int64$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0, panda$core$Int64 param1) {

// line 98
org$pandalanguage$pandac$Type** $tmp338 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp339 = *$tmp338;
org$pandalanguage$pandac$FixedArray** $tmp340 = &$tmp339->subtypes;
org$pandalanguage$pandac$FixedArray* $tmp341 = *$tmp340;
panda$core$Bit $tmp342 = panda$core$Bit$init$builtin_bit($tmp341 != NULL);
bool $tmp343 = $tmp342.value;
if ($tmp343) goto block1; else goto block2;
block2:;
panda$core$Int64 $tmp344 = (panda$core$Int64) {98};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s345, $tmp344, &$s346);
abort(); // unreachable
block1:;
panda$core$Object* $tmp347 = org$pandalanguage$pandac$FixedArray$$IDX$panda$core$Int64$R$org$pandalanguage$pandac$FixedArray$T($tmp341, param1);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$Type*) $tmp347)));
panda$core$Panda$unref$panda$core$Object$Q($tmp347);
// unreffing REF($14:org.pandalanguage.pandac.FixedArray.T)
return ((org$pandalanguage$pandac$Type*) $tmp347);

}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$MethodRef$get_returnType$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$MethodRef* param0) {

// line 102
org$pandalanguage$pandac$Type** $tmp348 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp349 = *$tmp348;
org$pandalanguage$pandac$Type* $tmp350 = org$pandalanguage$pandac$Type$get_returnType$R$org$pandalanguage$pandac$Type($tmp349);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp350));
// unreffing REF($3:org.pandalanguage.pandac.Type)
return $tmp350;

}
panda$core$String* org$pandalanguage$pandac$MethodRef$convert$R$panda$core$String(org$pandalanguage$pandac$MethodRef* param0) {

// line 107
org$pandalanguage$pandac$MethodDecl** $tmp351 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp352 = *$tmp351;
panda$core$String* $tmp353 = org$pandalanguage$pandac$MethodDecl$get_declaration$R$panda$core$String($tmp352);
panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s355, $tmp353);
panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s357);
org$pandalanguage$pandac$Type** $tmp358 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp359 = *$tmp358;
panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp356, ((panda$core$Object*) $tmp359));
panda$core$String* $tmp361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp360, &$s362);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
// unreffing REF($10:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp360));
// unreffing REF($9:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp356));
// unreffing REF($5:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
// unreffing REF($4:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
// unreffing REF($3:panda.core.String)
return $tmp361;

}
void org$pandalanguage$pandac$MethodRef$cleanup(org$pandalanguage$pandac$MethodRef* param0) {

// line 9
panda$core$Object$cleanup(((panda$core$Object*) param0));
org$pandalanguage$pandac$Type** $tmp363 = &param0->target;
org$pandalanguage$pandac$Type* $tmp364 = *$tmp363;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
org$pandalanguage$pandac$MethodDecl** $tmp365 = &param0->value;
org$pandalanguage$pandac$MethodDecl* $tmp366 = *$tmp365;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp366));
org$pandalanguage$pandac$Type** $tmp367 = &param0->effectiveType;
org$pandalanguage$pandac$Type* $tmp368 = *$tmp367;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp368));
return;

}

