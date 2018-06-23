Statements
==========

Panda code is comprised of a sequence of *statements*. Statements are executed one at a time, in
order, except where *control flow statements* specifically repeat or skip statements. The following
statement types are supported:

<a name="assignment"></a>
Assignment
----------

    <l-value> <assignmentOperator> <value>

An *l-value* is a value which can be assigned to. L-values include variables, fields, and index
operator expressions such as `array[0]`. The `assignmentOperator` specifies the kind of assignment
to be performed, either simple assignment (`:=`) or one of the compound assignment operators (`+=`,
`-=`, `*=`, `/=`, `//=`, `%=`, `^=`, `<<=`, `>>=`, `>>>=`, `&=`, `|=`, `~=`, `&&=`, `||=`, or
`~~=`). Simple assignment makes `<l-value>` equal to `<r-value>`, whereas the compound assignment
operators make `<l-value>` equal to `<l-value> <operator> <r-value>`.

See [Operators](operators.html) for full details on compound assignment.

<a name="methodCalls"></a>
Method Calls
------------

    [<object>.]<methodName>(<parameters>)

A method call statement *invokes* a [method](methods.html). If the context `<object>` is omitted,
the method will be resolved against [`self`](self.html) or the current [class](classes.html). The
return values of methods called as statements are ignored.

[Functions](functions.html) may not be called as statements: the only reason to call a method as a
statement is for the side effects it may have, and functions do not have side effects.

A method call `<object>` may be the special keyword `super`. This is equivalent to `self`, except
that the superclass' implementation of the method is used. For example,

    @override
    function convert():String {
        return "<Derived:\{super.convert()}>"
    }

<a name="control"></a>
<a name="if"></a>
if
----

    if <condition> {
        <statements>
    }


    if <condition> {
        <statements>
    }
    else {
        <statements>
    }

The `if` statement makes a decision based on the value of a `Bit` expression. If the `Bit` is
`true`, the statements under the `if` are executed. If the `Bit` is `false`, then the statements
under the `else` (if there is an `else`) are executed. For instance,

    def x := getValue()
    if x > 5 {
        Console.writeLine("x is greater than 5")
    }
    else if x < 5 {
        Console.writeLine("x was less than 5")
    }
    else {
        Console.writeLine("x was equal to 5")
    }

<a name="for"></a>
for
----

    for <target> in <collection> {
        <statements>
    }

    <label>: for <target> in <collection> {
        <statements>
    }

The `for` loop iterates over a collection one entry at a time, with `<target>` taking on the value
of the next element in the collection with each successive pass through the loop. `<collection>` may
be an [Iterator], [Iterable], [Range], or [SteppedRange]. As a simple example, the loop:

    for i in 1 ... 5 {
        Console.writeLine(i)
    }

will display the numbers 1 through 5, while:

    for greeting in ["Hello", "Bonjour", "Konnichi wa"] {
        Console.writeLine(greeting)
    }

will display greetings in several different languages.

The `<target>` may optionally have a type specifier, as in `for i:UInt8 in 1 ... 5`.

The optional `<label>` before the loop allows `break` and `continue` statements to refer to it by
name. It is otherwise ignored.

If `<collection>` is a collection of [tuples](tuples.html), `<target>` may be a parenthesized list
of variable names to split the tuple into separate variables:

    def list := [("Five", 5), ("Twelve", 12), ("Forty-two", 42)]
    for (name, value) in list {
        numbers[name] := value
    }

<a name="while"></a>
while
-----

    while <test> {
        <statements>
    }

    <label>: while <test> {
        <statements>
    }

The `while` statement repeatedly executes a block of statements so long as its `Bit`-valued test is
`true`.

The optional `<label>` before the loop allows `break` and `continue` statements to refer to it by
name. It is otherwise ignored.

<a name="do"></a>
do
----

    do {
        <statements>
    }
    while <test>

    label: do {
        <statements>
    }
    while <test>
    
The `do` loop is very similar the `while` loop, but it checks its condition at the end of the loop
rather than the beginning. The loop body will therefore always execute at least once.

The optional `<label>` before the loop allows `break` and `continue` statements to refer to it by
name. It is otherwise ignored.

<a name="loop"></a>
loop
----

    loop {
        <statements>
    }

    label: loop {
        <statements>
    }

The `loop` statement runs its body over and over indefinitely. It is an infinite loop unless a
`break` or `return` statement escapes from it.

The optional `<label>` before the loop allows `break` and `continue` statements to refer to it by
name. It is otherwise ignored.

<a name="break"></a>
break
-----

    break

    break <label>

The `break` statement immediately terminates a `for`, `while`, `do`, or `loop`, causing execution to
continue from the statement immediately after the end of the loop. Normally, `break` terminates the
innermost loop it is contained within, as in:

    loop {
        var value := getValue()
        if value = null {
            break
        }
        sendValue(value)
    }

`break` with a label can be used to break out of multiple nested loops:

    outer: for x in 0 .. width {
        for y in 0 .. height {
            processCell(x, y)
            if !isValid()
                break outer
        }
    }

<a name="continue"></a>
continue
--------

    continue

    continue <label>

The `continue` statement immediately skips ahead to the next iteration of a `for`, `while`, `do`, or
`loop`. As with `break`, `continue` normally affects the innermost loop it is contained within, but
the optional `<label>` allows it to refer to loops other than the innermost one.

<a name="return"></a>
return
------

    return

    return <value>

The `return` statement immediately exits the current method and (for methods which return a value)
causes it to return the specified value. Return statements in methods which return values must
always provide a value, and return statements in methods which do not return values may never
provide a value.

<a name="assert"></a>
assert
------

    assert <condition>

    assert <condition>, <message>

An `assert` statement tells the compiler that `<condition>` should always be `true` at this point.
With safety checks on, the `<condition>` is double-checked at run time and, if it is found to in
fact be `false`, the program terminates with an error message. The optional `<message>` is a string
providing a specific message to display upon failure.

With safety checks off, the assertion is *assumed* to be true and is not double-checked at runtime.
This allows the compiler to optimize the code under the assumption that the condition is in fact
`true`. Any code that would cause an assertion failure becomes undefined behavior when safety checks
are disabled.

Assertions which always evaluate to false are a compile-time error. In other languages, you may be
used to using something equivalent to `assert false` to signify "it should not be possible for this
line of code to be reached", but in Panda `assert false` will not compile. You need to use
`unreachable`, described below, to express this.

**IMPLEMENTATION NOTE:** "assert false" isn't actually a compiler error yet, but it will be soon.

<a name="unreachable"></a>
unreachable
-----------

    unreachable

The `unreachable` statement tells the compiler that this line of code will never actually be
reached. For instance, in the code:

    var widget:Widget
    if widgetReady() {
        widget := nextWidget()
    }
    else if canManufactureWidget() {
        widget := makeWidget()
    }
    processWidget(widget) -- error!

we will receive a compilation error because `widget` is not definitely assigned at the point where
it is used. What if there is no ready widget and we cannot manufacture a new one? But suppose we
know for sure that one of those conditions will always be true. We can then modify the code to read:

    var widget:Widget
    if widgetReady()
        widget := nextWidget()
    else if canManufactureWidget()
        widget := makeWidget()
    else {
        -- can't happen!
        unreachable
    }
    processWidget(widget)

and the code will then compile. We are asserting to the compiler that there is always either a
widget ready or we will be able to manufacture one, and that the final `else` clause cannot actually
be reached. The `widget` variable is therefore definitely assigned, because the only possible path
by which `widget` would remain unassigned is known to be `unreachable`.

Actually reaching an `unreachable` statement is, of course, bad. By default, this will result in a
safety violation which causes the program to terminate. If safety checks are disabled, the compiler
is free to optimize under the assumption that no `unreachable` code is actually reached, and
reaching `unreachable` therefore causes undefined behavior.

<a name="match"></a>
match
-----

    match <expression> {
        when <value1>:
            <statements>
        when <value2>, <value3>:
            <statements>
        otherwise:
            <statements>
    }

The `match` statement runs one of a number of blocks based on the value of its `<expression>`.
`match` is a generalization of `if`: `if` runs one of two blocks based on the value of its `Bit`
expression, whereas `match` runs one of any number of blocks based on the value of its expression.
Each `when` may have any number of values, and the `when` will be run if the `<expression>` matches 
any of them. If none of the values in any `when` match, the optional `otherwise` block is run if
present. If none of the `when` values match and there is no `otherwise` block, execution simply
continues after the end of the `match`.

Unlike many other languages, Panda's switch statement does not have "fall-through": when the
statements associated with a `when` finish, execution continues after the end of the match
statement.

When matching a [`choice`](choices.html), the `when` conditions may *destructure* the choice and
extract the values it contains. For example, given the `choice`:

    choice Node {
        TAG(String, ImmutableArray<Node>)
        TEXT(String)
    }

we can use `match` to both determine what kind of `Node` we are dealing with and to extract the data
it contains:

    function text(node:Node):String {
        match node {
            when Node.TAG(name, children):
                return "<\{name}>\{children.map(c => text(c)).join()}</{name}>"
            when Node.TEXT(text):
                return text
        }
    }
