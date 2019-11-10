Non-nullability
===============

[Types](types.md) are non-nullable by default, meaning that [`null`](null.md) is a not a legal value
for types by default. The following code therefore will not compile:

    def s:String := null -- won't compile, as null is not a String

In order to permit `null`s within a type, the type must be declared *nullable* by adding a question
mark (`?`) to the end of the type.

    def s:String? := null -- compiles fine!

As `null` is a valid `String?` (nullable `String`), but is *not* a valid `String` (non-nullable
`String`), the nullable `String?` variable `s` may not be used where a non-nullable `String` is
expected:

    def s:String? := null
    Console.printLine(s) -- error, doesn't compile

unless the compiler can prove that the value cannot actually be `null` at the point where it is
used:

    def s:String? := "Hello"
    Console.printLine(s) -- compiles fine, because the value can't actually be null

The Frost compiler uses data flow analysis to determine whether a given value might actually be
`null` at the point where it is used. This means that you can use control flow statements like
`if` to ensure that a `null` value is not seen by code which is not expecting it:

    def s:String? := someFunctionThatMightReturnNull()
    if s !== null {
        Console.printLine(s)
    }

Because the `Console.printLine` is only executed when `s` is not null, this code compiles fine. We
could also have written:

    def s:String? := someFunctionThatMightReturnNull()
    assert s !== null
    Console.printLine(s)

Because we cannot reach the `Console.printLine` without passing through an
[`assert`](statements.md#assert) that `s` is non-`null`, then if `s` turns out to be `null` the
program will either crash at the `assert` statement (if safety checks are enabled) or enter
undefined behavior (if safety checks are disabled). Either way, the compiler can assume that `s` is
non-`null` at the point where it is accessed.

Limitations
-----------

During this early phase of development, the Frost compiler does not yet understand that, assuming
no side effects have been triggered, functions called with the same parameters will return the same
values. This means that if you do something like:

    def array := Array<String?>()
    ...
    if array[0] !== null {
        Console.printLine(array[0]) -- error: array[0] might be null
    }

then Frost will currently complain that `array[0]` might be `null`, even though you just checked
that it isn't. The two references to `array[0]` are of course two separate function calls, and Frost
does not yet recognize that they are guaranteed result in the same value and can be coalesced into a
single call. Rewriting the code to make this clear to the compiler:

    def array := Array<String?>()
    ...
    def first := array[0]
    if first !== null {
        Console.printLine(first) -- works fine
    }

will resolve the situation. Keep in mind that you may run into this with nullable
[properties](properties.md), which are also function calls even though they look like a simple field
access.

This analysis will improve over time and we will eventually deal with this situation correctly. But
even then, no compiler is as smart as a human. There will always be situations in which it is in
theory possible to prove that a value cannot be `null`, but the Frost compiler is not actually able
to do so and will report an error. The easiest way to work around this issue is to use a
[cast or force non-null operator](operators.md#cast) to cast the value to a non-nullable type at
the point of access.

Performance Considerations
--------------------------

Treating a member of a [value type](values.md), such as [Int], as if it were a full-fledged object
requires an actual object instance to be created in order to hold it. For instance,

    def o:Object := 5

allocates memory on the heap to hold an instance of the `Int` class because of the conversion to
`Object`. This has an impact on both memory and performance, relative to always treating the value
as an `Int`.

You might expect that the same situation would hold true if you were to write:

   def i:Int? := 5

After all, the value can be set to `null`, and doesn't `null` imply that we're using a pointer? Not
in this case: we really only need to be able to distinguish between `null` and non-`null` values,
and all we need to do that is a single extra bit of storage. `Int?` is internally represented as an
`Int` followed by a single extra byte to keep track of whether or not it is `null`. The performance
impact of doing this is much lower than turning it into a heap-allocated object instance.