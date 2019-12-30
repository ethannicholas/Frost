Types
=====

A *type* is a kind of data, such as [String] or [Int]. Every type has an associated
[class](classes.md), but more than one type may map to the same class: for instance, `String` and
`String?` are two distinct types, but are the same class (`frost.core.String`).

The full syntax for a class type is:

    <class>[<parameters>][?]

For example, the type `Array<Int64?>?` refers to a nullable array of nullable `Int64`s.

`<class>` is the name of any Frost class, such as `Int32` or `String`. Class names may or may not be
[fully qualified](packages.md).

The `<parameters>` are an optional comma-separated list of types, surrounded by angle brackets
(`<type1, type2>`). Parameters are used by [generic types](generics.md).

The optional question mark at the end of a type name identifies the type as being
[*nullable*](nonNullability.md). Without a trailing question mark, the type is non-nullable and
thus [`null`](null.md) is not a legal value for the type.

Every [expression](expressions.md) in Frost has a type. Frost uses type inference to automatically
determine the types of [fields](fields.md) and [variables](variables.md).

The run-time type of a value is not necessarily the same as its compile-time type. For instance, in
the code:

    def str:Object := getString()

presuming that `getString()` does as its name suggests and returns a `String`, then the variable
`str` will contain a `String` and thus have a run-time type of `String`. But as its type was
explicitly declared as `Object`, it has a compile-time type of `Object`. You therefore could not
write:

    processString(str)

because you would be passing an `Object` to a method expecting a `String`. A
[typecast](operators.md#Cast) instructs the compiler to treat an object as a different
compile-time type; in this case you could write:

    processString(tr->String)

in order to make this call. Of course, in this particular case it would have been better to simply
declare `str` as the right type to begin with!

Method Types
------------

In addition to the class types described above, [methods](methods.md) have types. The type of a
function encapsulates its parameter types and return type in the form
`(<parameterTypes>)=>(<returnType>)`, for example:

    (Real, Real)=>(Real)

This type represents a function taking two `Real` parameters and returning a `Real` result, as in:

    function add(x:Real, y:Real):Real {
        return x + y
    }

Methods which are not functions (i.e. they potentially have side effects) have a slightly different
signature:

    (Real, Real)=&>(Real)

The ampersand in the middle of the arrow signifies "and other effects", as a method may perform
unspecified other actions. Methods may also be declared to not return a value, in which case the
return type is left blank. The signature of the [System.exit(Int)] method, for example, is:

    (Int)=&>()

signifying that it takes a single `Int` as a parameter, has side effects, and does not return a
value.

Function types such as `(Int)=>(Int)` may be used in contexts where the equivalent method type (in
this case `(Int)=&>(Int)`) is expected, but the reverse is not true.

Because [method references](methodReferences.md), [inline methods](inlineMethods.md), and
[lambdas](inlineMethods.md#Lambdas) can capture values, and those values may be mutable, the
resulting method reference can itself be mutable. The types described above permit both mutable
and [immutable](immutability.md) method references to be assigned to them. To restrict a method
type to immutable method references only, add an asterisk (`*`) after the arrow. This gives us four
different method types for any given combination of parameters and return type:

    ()=>(Int)   -- mutable function
    ()=&>(Int)  -- mutable method
    ()=>*(Int)  -- immutable function
    ()=&>*(Int) -- immutable method

Functions may be used wherever methods are allowed, and immutable method references may be used
wherever mutable method references are allowed.

Tuple Types
-----------

The type of a [tuple](tuples.md) is described by a parenthesized list of type
names:

    def tuple:(Object, Int) := ("Tuple", 12)
)

Tuples must contain at least two types. Tuples containing only immutable types will themselves be
considered immutable.
