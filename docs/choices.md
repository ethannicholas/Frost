Choices
=======

A `choice` is a special kind of [class](classes.md) that is Frost's version of what is commonly
known as a "sum type" or "tagged union". The simplest form of `choice` is very similar to a C
enumeration:

    choice Direction {
        NORTH
        SOUTH
        EAST
        WEST
    }

This creates a class with four possible values: `Direction.NORTH`, `Direction.SOUTH`,
`Direction.EAST`, and `Direction.WEST`.

Choice values may also have additional data attached to them:

    choice Expression {
        LITERAL(Int)
        ADD(Expression, Expression)
        SUBTRACT(Expression, Expression)
        MULTIPLY(Expression, Expression)
        DIVIDE(Expression, Expression)
    }

In this case `Expression` has five possible states. An `Expression.LITERAL` contains a single `Int`,
and the other four types of expression contain two `Expression` children. Using this class, we could
represent the expression `3 + 6` as `Expression.ADD(Expression.LITERAL(3), Expression.LITERAL(6))`.

To extract values from an `Expression`, we need to use a [`match`](statements.md#match) statement to
destructure it:

    choice Expression {
        LITERAL(Int)
        ADD(Expression, Expression)
        SUBTRACT(Expression, Expression)
        MULTIPLY(Expression, Expression)
        DIVIDE(Expression, Expression)

        @override
        function get_toString():String {
            match self {
                when Expression.LITERAL(v)     { return v.toString }
                when Expression.ADD(a, b)      { return "\{a} + \{b}" }
                when Expression.SUBTRACT(a, b) { return "\{a} - \{b}" }
                when Expression.MULTIPLY(a, b) { return "\{a} * \{b}" }
                when Expression.DIVIDE(a, b)   { return "\{a} / \{b}" }
            }
        }
    }

As shown above, choices are a kind of class and may contain user-defined methods, but they may not
contain fields (other than [constants](constants.md)).

Default Methods
---------------

Choices which do not override [Object.get_toString] will receive a default implementation that
returns the name of the choice and its data, such as `LITERAL(3)`.

If all of the data elements of a choice implement [Equatable], the choice itself will implement
[Equatable]. If an `Equatable` choice does not contain an implementation of the `=` operator, it
will receive a default implementation.

If all of the data elements of a choice implement [HashKey], the choice itself will implement
[HashKey]. If a `HashKey` choice does not contain an implementation of the `hash()` function, it
will receive a default implementation.

Of course, if a choice does not contain any data elements (such as the `Direction` example above),
it is trivially true that all of its data elements implement `Equatable` and `HashKey`. Thus
`Direction` will implement both of these interfaces.