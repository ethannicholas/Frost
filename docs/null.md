null
====

`null` is a [keyword](keywords.html) which represents the absence of a value. [Types](types.html)
are [non-nullable](nonNullability.html) by default, meaning that `null` is a not a legal value for
types by default. The following code therefore will not compile:

    var s:String := null -- won't compile, as null is not a String

In order to permit `null`s within a type, the type must be declared *nullable* by adding a question
mark (`?`) to the end of the type.

    var s:String? := null -- compiles fine!

As `null` is a valid `String?` (nullable `String`), but is *not* a valid `String` (non-nullable
`String`), the nullable `String?` variable `s` may not be used where a non-nullable `String` is
expected:

    var s:String? := null
    s := "Hello"
    Console.printLine(s) -- error, doesn't compile

See details on [nullability / non-nullability](nonNullability.html) for how to handle nullable types
where non-nullable types are required.

`null` can be [implicitly cast](implicitCasting.html) to any nullable type.
