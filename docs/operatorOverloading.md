Operator Overloading
====================

Frost classes may provide their own implementations of [operators](operators.html), which is called
*operator overloading*.

    -- this won't compile, keep reading!
    class OperatorExample {
        var value:Int

        init(value:Int) {
            self.value := value
        }

        @override
        function convert():String {
            return "OperatorExample: \{value}"
        }

        @class
        method main() {
            def a := OperatorExample(12)
            def b := OperatorExample(16)
            Console.writeLine(a + b) -- error!
        }
    }

If you attempt to compile this class, it will fail because Frost does not know how to add two 
`OperatorExample`s together.

We can tell Frost how to add these together by providing an implementation of the `+` operator:

    function +(right:OperatorExample):OperatorExample {
        return OperatorExample(value + right.value)
    }

If you define this function and recompile the example, it will now run and 
produce:

    OperatorExample: 28

Operators are just syntactic sugar for method calls. There is no difference between using a typical
operator expression and simply calling the method directly, so that the operator expression `5 + 3`
and the method call `5.+(3)` mean exactly the same thing.

Any binary operator can be overloaded by providing a function that accepts the left and right
operands; either explicitly as a `@class` method with two parameters, or as a one-parameter instance
method with `self` implicitly representing the left operand. When the left and right operands are
different classes, both classes will be checked for appropriate functions.

Methods implementing unary operators (such as logical not (`!`) or unary minus (`-`)) take zero
parameters and therefore operate only on `self`.

The index operator (`[]`) is treated as an ordinary binary operator; `list[x]` is equivalent to
`list.[](x)`. The indexed assignment operator is, uniquely, a ternary operator operating on `self`,
the index, and the value, so that `list[x] := v` becomes a call to `list.[]:=(x, v)`.
