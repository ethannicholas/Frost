Operators
=========

An *operator* is a special symbol that performs an operation on one or two *operands* and produces a
*result*. For instance, in the expression `7 + 3` the operator is `+` (addition), the two operands
are `7` and `3`, and the result is `10`.

The behaviors described below are how Frost's built-in types define these operators to work. They
may be [overloaded](operatorOverloading.md), just as they are in the built-in types.

Frost operators come in several categories:

Arithmetic
----------

* `+` (add): `2 + 3` is `5`
* `-` (subtract): `5 - 3` is `2`
* `*` (multiply): `4 * 3` is `12`
* `/` (divide): `9 / 2` is `4.5`
* `//` (integer divide): `9 // 2` is `4`
* `%` (remainder): `9 % 2` is `1`

Frost's arithmetic operators operate on [numbers](basicTypes.md#Numbers), and always produce at
least an `Int32` value, even if the [types](types.md) you are operating on are smaller than that.
If either of the two operands is `Real`, the result is `Real`. If either of the two operands is 64
bits long, the result is 64 bits long. Thus `Int8 * Int16 = Int32`, `Int64 * Real32 = Real64`, and 
`Real32 * Int32 = Real32`. Mixing signed and unsigned integers results in a signed type big enough
to hold either of its operands, so adding an `Int32` and a `UInt32` results in an `Int64`. It is an
error to add an `Int64` and a `UInt64`, because there is no signed type big enough to hold all
`UInt64` values.

Note that Frost's division operator always produces a `Real` result, even if you are dividing two
integers. To perform an integer division you must use the integer divide (`//`) operator.

It is a [safety violation](safetyViolations.md) for any of these operations to result in integer
overflow. Use the unchecked operators below to perform math which can overflow.

Unchecked Arithmetic
--------------------

* '+&' (unchecked add) `Int.MAX +& 1` is `Int.MIN`
* '-&' (unchecked subtract) `Int.MIN -& 1` is `Int.MAX`
* '*&' (unchecked multiply) `Int.MAX *& 2` is `-2`
* '//&' (unchecked integer divide) `Int.MIN //& -1` is `Int.MIN`
* '<<&' (unchecked left shift) `Int32.MAX <<& 1` is `-2`

The unchecked arithmetic operators function exactly like the normal arithmetic operators, except
that they do not detect integer overflow. The resulting answer is the true answer modulo 2^n, where
*n* is the bit width of the operation.

Range
-----

* `..` (exclusive range)
* `...` (inclusive range)

The range operators provide a shorthand syntax for creating [Range] and [SteppedRange] objects. The
range operators take an optional start value, an optional end value, and an optional step value, so
the following ranges are all valid:

* `0 .. 10` (equivalent to `Range<Int>(0, 10, false)`)
* `...` (equivalent to `Range<Int?>(null, null, true)`)
* `10 ... by -1` (equivalent to `SteppedRange<Int?>(10, null, -1, true)`)

`Range` and `SteppedRange` are used in many of Frost's APIs. They are used to specify subranges of
[List], substrings of [String], and as a target of [`for` loops](statements.md#for).

Shift
-----

* `<<` (shift left): `5 << 2` is `20`
* `>>` (shift right): `-20 >> 2` is `-5`

The *shift left* operator shifts the bits in a [number](basicTypes.md#Numbers) to the left,
inserting zero bits on the right. Left shifting by `n` bits is equivalent to multiplying by 2^n
with no overflow checking.

The *shift right* operator shifts the bits in a number to the right. For unsigned types zero bits
are inserted on the left, and for signed types copies of the sign bit are inserted on the left.
Right shifting by `n` bits is equivalent to dividing by 2^n.

Comparison
----------

* `=` (equal): `12 = 12` is `true`
* `!=` (not equal): `12 != 12` is `false`
* `>` (greater than): `5 > 5` is `false`
* `>=` (greater than or equal): `5 >= 5` is `true`
* `<` (less than): `-12 < 2` is `true`
* `<=` (less than or equal): `2 <= -12` is `false`

The comparison operators all follow standard arithmetic rules and produce a `Bit` result, either
`true` or `false`. The `=` operator checks for *equality* rather than *identity*; in other words
`string1 = string2` checks whether the two strings have the same value (the same sequence of
characters), not whether they are actually the same string object.

The comparison operators are defined by the [Equatable] and [Comparable] interfaces. Generally
speaking, if you implement any of these operators you should also implement the `Equatable` or
`Comparable` interface.

Identity
--------

* `==` (identity): `MutableString() == MutableString()` is `false`
* `!==` (not identity): `MutableString() !== MutableString()` is `true`

The *identity* operator checks whether two objects are in fact the same object. The 
`MutableString() == MutableString()` example returns `false` because two distinct `MutableString`
objects are being created. They are *equal*, because they contain the same (zero-length) sequence of
characters, but they are not *identical*, because they are two distinct objects. Identity is a
seldom-used operation; you will almost always want to compare objects for equality rather than for
identity.

The identity / not identity operators are not allowed to operate on [value](values.md) objects, as
value objects do not have a well-defined identity. If you "trick" Frost into comparing the identity
of two value objects, for instance:

    def a:Object := 5
    def b:Object := 5
    Console.printLine(a == b)

the result is undefined. This may display either `true` or `false`, and the output may change with
compiler settings, environment, context, or version of Frost.

Logic
-----

* `&` (logical and): `true & false` is `false`
* `|` (logical or): `true | false` is `true`
* `~` (logical exclusive or): `true ~ true` is `false`
* `!` (logical not): `!true` is `false`

The logical operators implement the standard boolean logic functions.

### Short-Circuiting

The *logical and* and *logical or* operators on `Bit` values are `short-circuiting`: that is, they
do not evaluate the right-hand operand unless they need to. If the left-hand operand of a logical
and is `false`, then the result of the logical and is `false` no matter what the right-hand operand
evaluates to, and so the right-hand operand is not evaluated. Likewise, if the left-hand operand of
a logical or is `true`, then the result of the logical or is `true` no matter what the right-hand
operand evaluates to, and so the right-hand operand is not evaluated.

This short-circuiting behavior is built into the compiler for `Bit` values; there is no way to
replicate this behavior on user-defined types.

Bitwise
-------

* `&&` (bitwise and): `0b101 && 0b110` is `0b100`
* `||` (bitwise or): `0b101 || 0b110` is `0b111`
* `~~` (bitwise exclusive or): `0b101 ~~ 0b110` is `0b011`
* `!!` (bitwise not): `!!0` is `-1`

The bitwise operators implement the standard boolean logic functions bit-by-bit on two integers.
Unlike the logical operators, the bitwise operators always evaluate both of their operands.

Cast
----

* `->` (cast): `object->(String)` casts `object` to a `String`
* `!` (force non-null): `object!` casts `object` from a [nullable](nonNullability.md) type to a
                        non-nullable type

The cast operator tells the compiler to treat an object as being a different
[type](types.md). For instance, in

    def x:Object := "Hello"
    processString(x)

assuming `processString` is declared to take a single parameter of type `String`, this code will
produce the message `no match found for method processString(frost.core.Object)`. As far as the
compiler is concerned, the variable `x` has type `Object`, and so one cannot call the method 
`processString` on it.

Since the value `x` holds is actually a `String`, we can inform the compiler of
this via the *cast* operator:

    processString(x->String)

This statement *casts* `x` to the type `String`. Casting doesn't actually change the value; 
it just instructs the compiler to assume that it is a different type. An invalid cast - that is,
casting an object whose runtime type turns out to not actually match the target type - is a
[safety violation](safetyViolations.md).

The *force non-null* operator (postfix exclamation mark, `!`) is shorthand for casting a nullable
value to its non-nullable equivalent. If `nullableString` represents a value of type
`frost.core.String?`, the expression `nullableString!` is exactly equivalent to the expression
`nullableString->String`.

There is one situation in which the force non-null operator may behave in a surprising fashion. If
you have a generic type, such as in:

    class Example<T> {
        def field:T?
    }

then the expression `field!` casts `field` from `T?` to `T`. But since `T` is a generic type, it
might *also* be nullable. If that were the case it would mean that it is actually ok for `field` to
be `null`, despite the presence of the force non-null operator. In this example, if `T` is nullable
the expression `field!` will never result in a safety violation, even when `field` is `null`.

Index
-----

* `[]` (index): `a[12]`
* `[]:=` (indexed assignment): `a[12] := 3`

The *index* operator is used to reference elements in collections, while the *indexed assignment*
operator modifies collection elements. Many built-in classes which define the index operators also
define them to work on [Range] and [SteppedRange], so you can for instance reverse the order of a
list simply by writing:

    list[..] := list[.. by -1]

Operator Precedence
-------------------

See [expressions](expressions.md#Precedence) for a description of operator precedence.