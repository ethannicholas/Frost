Syntax Overview
===============

This is a basic overview of Frost's syntax and features, intended to help experienced programmers
quickly get started in Frost.

Comments
--------

    -- line comment

    -* block
       comment *-

    ============================================================================
    This is a documentation comment. Technically, only three ='s are needed to
    begin and end it, but it looks nicer to fill the entire line up.
    ============================================================================

It is legal to nest block comments. [Documentation comments](documentationComments.md) are part of
Frost's grammar, and thus can only appear in prescribed locations.

Numeric Literals
----------------

    3
    -12
    2.17
    1e6

Unlike in many languages, there are no suffixes to specify the type of a numeric literal. The number
`3` could be interpreted as a signed integer, unsigned integer, or real number, depending on
context.

There must be at least one digit after a decimal point, so "3." is not a valid number. Use `3.0`
instead.

Strings
-------

Frost [strings](String) are either single- or double-quoted, with support for backslashed escape
sequences similar to C.

String literals may have expressions embedded into them using the syntax `\{expression}`, e.g.:

    -- testcase OverviewPrintLine(Simple)
    def firstName := "Sarah"
    def lastName := "Smith"
    Console.printLine("Hello, \{firstName} \{lastName}!")

This is called [string interpolation](stringInterpolation.md), and it has quite a few other tricks
up its sleeves.

Frost's strings are immutable, but there is a mutable variant called [MutableString].

Basic Types
-----------

* [Int8], [Int16], [Int32], [Int64]
* [UInt8], [UInt16], [UInt32], [UInt64]
* [Real32], [Real64]
* [Bit]
* [Char8], [Char16], [Char32]
* [String]

`Bit` is Frost's Boolean type, which has only two values: `true` and `false`.

`Int`, `UInt`, and `Real` are either 32 or 64 bit numbers, depending upon the compilation settings.

Operators
---------

### Arithmetic: ###
* `+` (add)
* `-` (subtract)
* `*` (multiply)
* `/` (real divide)
* `//` (integer divide),
* `%` (remainder)

### Comparison: ###
* `=` (equal)
* `!=` (not equal)
* `==` (identical)
* `!==` (not identical)
* `<` (less than),
* `<=` (less than or equal)
* `>` (greater than)
* `>=` (greater than or equal)

### Logical: ###
* `!` (not)
* `&` (and)
* `|` (or)
* `~` (xor)

### Bitwise: ###
* `!!` (bitwise not)
* `&&` (bitwise and)
* `||` (bitwise or)
* `~~` (bitwise xor)

### Shift: ###
* `<<` (shift left)
* `>>` (shift right)

### Assignment: ###
* `:=` (assignment)
* `+=` (add and assign)
* `-=` (subtract and assign)
* `*=` (multiply and assign)
* ...

### Other: ###
* `->` (typecast)

The "identical" and "not identical" operators check whether two objects are *the same object*,
rather than merely containing the same data. For instance, two strings may be equal (they contain
the same sequence of characters) but not identical (they are two distinct copies of the same
string).

Variables
---------

The full syntax for declaring variables is:

    var x:Int := 0, y:Int := 0

Frost supports type interpolation, so you may omit the type declaration when a variable has an
initial value:

    var hello := "Hello, World!"

If a variable does not have an initial value, it must be given a type:

    var hello:String

The `def` keyword is similar to `var`, but defines a value which cannot be reassigned:

    def hello := "Hello, World!"
    hello := "Goodbye!" -- ERROR, cannot reassign a def

You should generally use `def` instead of `var` wherever possible. In idiomatic Frost code, `var` is
uncommon.

The `constant` keyword is similar to `def`, but has the additional requirement that the value must
be [Immutable]:

    constant PI := 3.141592653589

There are *no global variables* in Frost. This includes class-level variables - in Java,
`public class Global { public static int foo; }` is effectively a global variable, in that
`Global.foo` is accessible from anywhere. There is no equivalent in Frost; the only
globally-accessible Frost values are class-level constants.

Conditional Statements and Loops
--------------------------------

Braces are required, even when there is only one statement in the block.
    
    if <expression> {
        ...
    }

    if <expression> {
        ...
    }
    else {
        ...
    }

    while <expression> {
        ...
    }

    do {

    }
    while <expression>

    loop { -- infinite loop, similar to 'while true { ... }'
        ...
    }

All conditional statements require an expression of type `Bit`.

For Loops
---------

    for <variable> in <collection> {
        ...
    }

`<collection>` may be an [Iterator], [Iterable], [Range], or [SteppedRange].

To count from 1 to 10:

    -- testcase OverviewFor(Simple)
    for i in 1 ... 10 {
        Console.printLine(i)
    }

To count backwards from 100 by 10:

    -- testcase OverviewForBackwards(Simple)
    for i in 100 ... 0 by -10 {
        Console.printLine(i)
    }

To iterate over a collection:

    -- testcase OverviewForGreet(Simple)
    for greeting in ["Hello", "Bonjour", "Hola", "Guten tag"] {
        Console.printLine(greeting)
    }

Ranges
------

You may define a [Range] using the syntax `[start] .. [end]` or `[start] ... [end]`. With two dots,
the range is *exclusive* and does not include its end. With three dots, it is *inclusive* and does
include its end.

Ranges are important for iteration, selecting subranges of a list, etc. For instance, to grab the
first ten elements of a list, you may write either `list[0 .. 10]` or `list[0 ... 9]`.

You may omit the start value to mean "from the beginning", so `list[..10]` is a shorter way to get
the first ten elements. Omitting the end value means "to the end". You may also omit both the start
and end, so `list[..]` is a (shallow) copy of the entire list.

Stepped Ranges
--------------

A [stepped range](SteppedRange) is a range followed by `by <step>`, such as `0 ... 100 by 10`. This
allows you to do things like select every other value of a list (`list[.. by 2]`) or reverse a list
(`list[.. by -1]`).


Flow Control Statements
-----------------------

    break

    break <label>

    continue

    continue <label>

    return

    return <value>

Any loop may be prefixed with a named `label:`, to make it a target for labeled `break` and
`continue` statements:

    -- testcase OverviewBreak
    var found := false
    outer: for i in 0 .. count {
        for j in 0 .. count {
            if i != j & array[i] = array[j] {
                found := true
                break outer
            }
        }
    }

Assertions
----------

    assert <expression>

    assert <expression>, "failure message"

    unreachable

    unreachable, "failure message"


`unreachable` is a special assertion which means "the program will never reach this statement". This
is commonly expressed as `assert false` in other languages, but an assertion which always fails is a
compile-time error in Frost and so `assert false` is not actually legal.

Match
-----

`match` is similar to C's `switch` statement:

    match <expression> {
        when <expression> { -- run this code if the value matches
            ...
        }
        when <expression>, <expression>, <expression> { -- match any of these values
            ...
        }
        otherwise { -- run this code if there are no matches
            ...
        }
    }

There is no fallthrough. Unlike C, the values do not have to be compile-time numeric constants (but
it is more efficient if they are).

`match` also allows for powerful `choice` matching and destructuring, discussed further down.

Methods
-------

    -- testcase OverviewMethodAdd(OverviewAdd)
    method add(x:Int, y:Int):Int {
        return x + y
    }

`function` is similar to `method`, but a function cannot have side effects: it may not (directly or
indirectly) modify any external-visible state. Since the above `add` method does not modify any
state, it could have been declared as a `function`:

    -- testcase OverviewFunctionAdd(OverviewAdd)
    function add(x:Int, y:Int):Int {
        return x + y
    }

Frost supports overloading by method parameters *and* by return type. For example:

    -- testcase OverviewReturnOverload(Complete)    
    function empty():Int {
        return 0
    }

    function empty():String {
        return ""
    }

    function empty():Bit {
        return false
    }

    method main() {
        def i:Int    := empty() -- calls empty():Int
        def s:String := empty() -- calls empty():String
        def b:Bit    := empty() -- calls empty():Bit
        def broken   := empty() -- ERROR, ambiguous!
    }

[Read more about methods.](methods.md)

Classes
-------

The syntax for creating classes is similar to most object-oriented languages:

    -- testcase OverviewClass(Complete)
    class Adder {
        def x:Int

        init(x:Int) {
            self.x := x
        }

        function add(y:Int):Int {
            return x + y
        }
    }

    method main() {
        Console.printLine(Adder(12).add(6)) -- prints 18
    }

[Read more about classes.](classes.md)

Creating Instances
------------------

Frost's constructors are called "`init` methods". As seen above in the `Adder` class, they are
written as `init(<parameters> { ... }`.

There is no `new` operator in Frost. Simply put the arguments to `init` after the name of the class,
as in:

    def a := Adder(12)

Interfaces
----------

    -- testcase OverviewFormattable
    interface Formattable {
        function format(fmt:String):String
    }

Interfaces may provide a *default implementation* of a method:

    -- testcase OverviewFormattableDefault
    interface Formattable {
        @default
        function format(fmt:String):String {
            return "<formatted object>"
        }
    }

This default implementation will be used if the class that implements the interface does not provide
its own implementation.

[Read more about interfaces.](interfaces.md)

Inheritance
-----------

    -- testcase OverviewInheritance
    class Foo : Bar, Formattable {
        @override
        function format(fmt:String):String {
            return "I am an instance of Foo!"
        }
    }

A class may subclass one class and any number of interfaces.

Choices
-------

A `choice` is a special kind of class which functions similarly to a C++ `enum class`, a tagged
`union`, or some combination thereof.

    choice Direction {
        NORTH
        SOUTH
        EAST
        WEST
    }

    choice Expression {
        NUMBER(Int)
        ADD(Expression, Expression)
        SUB(Expression, Expression)
        MUL(Expression, Expression)
        DIV(Expression, Expression)
        NEGATE(Expression)
    }

When a choice entry has data fields associated with it, as with `Expression` above, the fields may
be extracted using `match`:

    -- testcase OverviewChoiceMatch
    match expr {
        when NUMBER(value) {
            return value.asString
        }
        when ADD(left, right) {
            return "\{left} + \{right}"
        }
        ...
    }

Packages
--------

A [package](packages.md) is a dotted namespace in which classes reside. Packages are declared by
a `package` statement at the beginning of a file:

    package com.example.foo

[Read more about packages.](packages.md)

Uses
----

The [`uses`](packages.md#uses) declaration allows you to refer to a class by its simple name:

    uses com.example.foo.Example

After this `uses` declaration, the name `Example` refers to the class `com.example.foo.Example`.

Annotations
-----------

Annotations are special tokens beginning with `@` which appear before a class, field, or method.
They provide instruction to the compiler about things like access control, safety checks, and so
forth. The most common annotations you will see are:

* `@override`: method overrides an inherited method
* `@private`: only accessible within the file which contains it
* `@class`: method belongs to the class itself, as opposed to instances of the class
* `@final`: method may not be overridden or class may not be subclassed
* `@pre`: a precondition contract (see "Contracts" below)
* `@post`: a postcondition contract (see "Contracts" below)

[Read more about annotations.](annotations.md)

Contracts
---------

Contracts are rules that a method is required to follow. Methods may have preconditions, which the
caller of the method must obey and are checked prior to entering the method, and postconditions,
which the method itself must obey and are checked prior to returning from it.

Postconditions may refer to the return value of the method as `@return`, and may use
`@pre(<expression>)` to refer to an expression's value before the method's execution. For instance:

    @pre(index >= 0 & index < count)
    @post(count = @pre(count) - 1)
    method remove(index:Int) {
        ...
    }

This remove method ensures that its `index` parameter is inside the valid range, and that running
the method reduces the value of `count` by `1`. These checks are similar to `assert`s, in that they
are checked at runtime by default, but this checking can be disabled via a command-line option for
performance reasons.

Values
------

A class which subclasses [Value] is referred to as a *value class*, and behaves differently from
other classes.

Value objects are similar to C structs. They are passed by value rather than reference, do not have
a header (they are "plain old data" objects), and do not have a distinct "identity" they way normal
objects do.

[Read more about values.](values.md)

Immutability
------------

Immutability is enforced: a class which subclasses [Immutable] may not contain any mutable fields.
Only immutable objects may be used as `constant`s, and normally only immutable objects may be shared
between multiple threads.

[Read more about immutabilitys.](immutability.md)

Everything is an Object
-----------------------

Every value in Frost is an object, even basic types such as numbers. The common mathematical
functions are defined directly on the numbers themselves, so you may compute the square root of 2
by writing `2.sqrt()`.

Basic types such as `Int64` are value classes. `Int64`'s data representation is exactly 64 bits
long and, even though it is a full-fledged class, after optimization it collapses down to the exact
same basic processor math instructions you would expect.

Memory
------

Frost features [automatic reference counting](memoryManagement.md). Objects will be promptly
cleaned up when no longer referenced. Objects have a special [`cleanup()`](Object.cleanup) method
which is called before they are destroyed; unlike with typical garbage collectors, this cleanup is
guaranteed to happen as soon as the object is no longer referenced. Because of this, `cleanup()` is
frequently used to tie operations to a particular scope, such as with [ScopedLock]:

    {
        def auto := ScopedLock(lock)
        -- lock is now locked

        ...

        -- 'auto' goes out of scope here; the lock is automatically unlocked
        -- at this point
    }

Frost provides [weak references](weakReferences.md) to help handle reference cycles.

[Read more about memory management.](memoryManagement.md)

Main and Bare Code
------------------

The main entry point into a Frost program is `@class` method named [`main`](main.md), defined on a
class of your choosing, which may have zero parameters or a single `ListView<String>` parameter (to
receive its command line arguments). For convenience, you may also define `main` [outside of any
class](bareCode.md), in which case a class is synthesized to hold it. This means that the simplest
way to write "Hello, World!" in Frost is:

    -- testcase OverviewBareHello(Complete)
    method main() {
        Console.printLine("Hello, World!")
    }

but you could also write it as:

    -- testcase OverviewHello(Complete)
    class Hello {
        @class
        method main(args:ListView<String>) {
            Console.printLine("Hello, World!")
        }
    }

[Read more about bare code.](bareCode.md)

Non-Nullability
---------------

By default, Frost types are *non-nullable*. If you have a variable defined to contain a `String`:

    def nonnullable:String

then it must contain a `String` and can never be `null`.

Any type may be made *nullable* by appending a question mark:

    def nullable:String?

The variable `nullable` may contain either a `String` or `null`. Even value types such as `Int` may
be made nullable:

    def numbers := Array<Int?>()

This creates an array which can contain either `Int` or `null` entries.

You may use a nullable type wherever a non-nullable type is expected, but only if Frost can prove
that the value cannot actually be `null` at that particular point. For example:

    def result:Object? := getResult()
    Console.printLine(result) -- ERROR, Console.printLine does not accept null

But if we prove that the value can't be `null` at the point where it is referenced, it works:

    -- testcase OverviewNonNullable
    def result:Object? := getResult()
    if result !== null {
        Console.printLine(result)
    }
    else {
        Console.printLine("<null>")
    }

[Read more about non-nullability.](nonNullability.md)

Regular Expressions
-------------------

Regular expressions are first-class values in Frost, introduced with the syntax `/regex/`. This
syntax creates a value of type [RegularExpression], which many methods in `String` and
`MutableString` operate on. `RegularExpression` may also be used to directly create a `Matcher`
object to do your own matching.

    -- testcase OverviewRegex(Simple)
    Console.printLine("Can you find the number 57?".parse(/.*?(\d+).*?/)!)

And, of course, you may directly create `RegularExpression` objects without relying on the built-in
syntax for it.

Array Literals
--------------

An [array literal](arrayLiterals.md) is an expression of the form:

    [1, 2, 3, 4, 5]

By default, this expression will be compiled into an `ImmutableArray` of the appropriate type, but
may be evaluated as another type depending upon the context in which it is used. For instance,

    def a:List<Int> := [1, 2, 3, 4, 5]

produces a mutable `Array` rather than an `ImmutableArray`, because `List` is writable.

[Read more about array literals.](arrayLiterals.md)

Tuples
------

A [tuple](tuples.md) is a parenthesized sequence of two or more comma separated values, such as:

    def tuple := (1, 2, "Hi")

Values may be extracted from the tuple by indexing into it:

    def greeting := tuple[2]

Tuples are used to implement multiple return types. A method which needs to return more than one
value can simply return a tuple.

[Read more about tuples.](tuples.md)

Operator Overloading
--------------------

Operators are overloaded by defining a function with the operator's name, as in `function +` below:

    -- testcase OverviewComplex
    class Complex : Value {
        def realPart:Real

        def imaginaryPart:Real

        init(realPart:Real, imaginaryPart:Real) {
            self.realPart := realPart
            self.imaginaryPart := imaginaryPart
        }

        function +(other:Complex):Complex {
            return Complex(realPart + other.realPart, imaginaryPart + other.imaginaryPart)
        }

        @override
        function get_asString():String {
            return "(\{realPart} + \{imaginaryPart}i)"
        }
    }

[Read more about interfaces.](operatorOverloading.md)

Generic Types
-------------

Here is an example generic class which holds objects of type `T` and pulls them back out at random:

    -- testcase OverviewBag
    class Bag<T> {
        @private
        def random:Random

        @private
        def contents := Array<T>()

        init(random:Random) {
            self.random := random
        }

        method add(object:T) {
            contents.add(object)
        }

        method pull():T {
            def index := random.int(contents.count)
            return contents.removeIndex(index)
        }
    }

You may restrict the types that a generic type parameter supports by specifying a type bound for it.
If, for some reason, you wanted `Bag` to only support [Formattable] types, you would write:

    class Bag<T:Formattable> {
        ...
    }

Generic Methods
---------------

Generic methods are defined very similarly to generic types:

    method process<T>(l:ListView<T>):ListView<T> {
        ...
    }

The type of the generic method is normally inferred at the call site. For instance, in the
expression

    process(["Hello", "Goodbye"])

the generic type `T` will be inferred to be `String`, and the method will return a
`ListView<String>`. You may manually specify the type(s) if you wish, as in:

    process<Object>(["Hello", "Goodbye"])

Methods as Values
-----------------

Methods are [first-class values](methodReferences.md) in Frost. You may assign methods to variables,
return them from other methods, etc.

Referring to a method by its name, without arguments, gives you a reference to the method. With
instance methods, you may refer to the method either as a member of a containing instance (in which
case it takes exactly its declared parameters) or as a member of its class (in which case it
takes an extra parameter representing its `self`). For instance, we can use the `Complex` class
above like this:

    -- testcase OverviewComplexAsValue
    method main() {
        def add := Complex.+
        Console.printLine(add(Complex(3, 1), Complex(7, 2))) -- prints (10 + 3i)
        def add3 := Complex(3, 0).+
        Console.printLine(add3(Complex(12, 2))) -- prints (15 + 2i)
    }

The first reference to `Complex.+` gives us a method reference which requires an extra parameter to
represent its `self`, while the second reference is taken out of a `Complex` instance and thus
already has a `self`, so it needs only its single declared `Complex` parameter.

Method names are often ambiguous. For instance, there are several `Int.+` functions with various
parameter types, which means that:

    def add := Int.+

produces an error. You need to give Frost a hint as to which `Int.+` function you want by declaring
its type. Function types are written `(parameters)=>(return)`, so a function which takes two `Int`s
and returns an `Int` has type:
    
    (Int, Int)=>(Int)

This allows us to specify which `Int.+` we want:

    -- testcase OverviewAddReference(Simple)
    def add:(Int, Int)=>(Int) := Int.+
    Console.printLine(add(17, 6)) -- prints 23

Note that since we grabbed `+` out of the `Int` class, it takes an extra parameter for its `self`.
We could also have referred to `+` as a member of a specific `Int` instance, in which case its
`self` is the object from which it was taken:

    -- testcase OverviewAdd3Reference(Simple)
    def add3:(Int)=>(Int) := 3.+
    Console.printLine(add3(8)) -- prints 11

In addition to function types like `(Int)=>(Int)`, there are method types (`(Int)=&>(Int)`),
immutable function types (`(Int)=>*(Int)`), and immutable method types (`(Int)=&>*(Int)`). These are
described on the [Method Types](types.md#methodTypes) page.

[Read more about inline methods.](inlineMethods.md)

Anonymous Methods
-----------------

Inside of a method, you may create anonymous method values:

    -- testcase OverviewAdder
    function getAdder(x:Int):(Int)=>(Int) {
        return function(y:Int):Int {
            return x + y
        }
    }

These inner methods are closures and have access to any `def`, `constant`, or parameter in scope,
but may not capture `var`s. To make the capture of `self` more obvious, any reference to the
enclosing method's `self` value must be explicitly specified.

Named Inner Methods
-------------------

    -- testcase OverviewInnerMethod
    method dump() {
        method indent(indentation:Int, s:String) {
            Console.printLine(" " * indentation + s)
        }
        Console.printLine("Name:")
        indent(4, "First: \{firstName}")
        indent(4, "Middle: \{middleName}")
        indent(4, "Last: \{lastName}")
    }

This is syntactic sugar for:

    method dump() {
        def indent := method(indentation:Int, s:String) {
            Console.printLine(" " * indentation + s)
        }
        ...
    }

and therefore all of the same rules apply to named inner methods as apply to anonymous inner
methods. Note that because of how named inner methods are handled, it is not possible to overload
inner methods.

Lambdas
-------

[Lambdas](inlineMethods.md#lambdas) are a shorthand syntax for creating anonymous functions which
return the value of an expression.

    x:Int => x.abs -- equivalent to function(x:Int):Int { return x.abs }

    (x:Int, y:Int) => x + y -- equivalent to function(x:Int, y:Int):Int { return x + y }

If the type of the lambda is implied by its context (for instance, when passing it to a method which
expects a particular function type), you may omit the types:

    x => x.abs

    (x, y) => x + y

[Read more about lambdas.](inlineMethods.md#lambdas)

Error Handling
--------------

Frost's error handling looks superficially like the exceptions found in many other languages:

    try {
        File("/tmp/foo").write("This is a new file!")
    }
    fail(error) {
        Console.printLine(error)
    }

But it is actually more akin to C's error return codes, in that [File.write(String)] can possibly
return an [Error]. The `try` block intercepts any error returns that occur inside of it and jumps
directly to the `fail` block. You *must* (directly or via a `try` block) look at the return value of
a method that can fail; it is a compile-time error to ignore errors.

[Read more about error handling.](errorHandling.md)

Semicolons
----------

Frost statements do not require a terminator, but may optionally be followed by a semicolon.
Generally speaking, you should only use semicolons for clarity when a line contains more than one
statement. Both

    x := 0 y := 0

and

    x := 0; y := 0

are perfectly legal, but the latter is easier to read.

Whitespace
----------

Other than the fact that it separates tokens, whitespace is generally ignored. There is one
exception to this rule: parenthesized and bracketed expressions are interpreted as method calls when
they appear after another expression on the same line, and as the beginnings of statements when they
appear at the beginning of a line. This means that

    foo(x)[3].apply(Console.printLne)

is a single statement meaning "call the method `foo(x)`, and then call the `[](3)` method on its
return value, and then call `apply(Console.printLine)` on the result of that".

But by formatting the same sequence of tokens differently:

    foo(x)
    [3].apply(Console.printLne)

we have two separate statements - a method call `foo(x)`, and then a statement which calls `apply`
on an array literal.

And that's it!
--------------

That provides at least a brief overview of all of the major features of Frost. If you haven't
already done so, you may wish to take a look at how to [get started](gettingStarted.md) with
Frost programming.
