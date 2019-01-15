Inline Methods
==============

In addition to defining [methods](methods.html) as members of a [class](classes.html), you may use
*inline methods* in [expressions](expressions.html):

    table.setFormatter(function(node:Node):String {
        return "\{node.id} (\{node.children.length})"
    })

Inline methods are defined very similarly to normal class member functions. They may be either
methods or [functions](functions.html), but they do not have names or annotations. Methods are a
first-class [type](types.html) in Frost, meaning that you may store methods in variables, return
them from methods, create arrays of methods, and otherwise treat them as you would any other Frost
value.

Methods defined inside of another method may access any visible [defines](defines.html), constants,
non-variable method parameters, or fields of the enclosing class.

See [method types](types.html#methodTypes) for how to describe the [type](type.html) of a method.

<a name="lambdas"></a>
Lambdas
-------

In addition to the full form shown above, a shorthand syntax exists to create functions which simply
return an expression:

    def f := x:Real => x * x

This is equivalent to the inline function:

    def f := function(x:Real):Real {
        return x * x
    }

This form of expression is known as a lambda. If a lambda expression has more than one parameter,
the parameters must be surrounded by parentheses:

    def f := (x:Real, y:Real) => (x * x + y * y).sqrt()

If the lambda is being used in a context where its type can be inferred (such as a call to a method
which expects a particular type of method or an assignment to a variable or field with a method
type), you may omit the parameter types:

    Int[1 ... 10].fold((x, y) => x + y)

Lambdas are always functions; they may not have side effects and there is no equivalent "method
form" of a lambda. If you must define an inline method, use the full syntax described above.
