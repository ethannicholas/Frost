Methods
=======

    method <name>(<parameters>) {
        <statements>
    }

    method <name>(<parameters>):<type> {
        <statements>
    }

    function <name>(<parameters>):<type> {
        <statements>
    }

    init(<parameters>) {
        <statements>
    }

A method is a [named](identifiers.md) block of code which can be invoked by *calling* the method.
Methods take zero or more *parameters*, which are values passed in to the method that it can
reference as if they were local variables. Each parameter is a name, a colon (`:`), and a
[type](types.md), and multiple parameters are separated by a comma (`,`). Methods may *return* a
value, which becomes the value of the method call expression.

Example:

    method sayHello(name:String) {
        Console.printLine("Hello, \{name}!")
    }

This defines a method named `sayHello`, which takes a single `String` argument named `name`. When
called (such as by `sayHello("Ethan")`), the statements within the method will be executed, in this
case invoking the `Console.printLine` method to display the text `Hello, Ethan!`.

To return a value from a method, first give the method a return type and then use `return <value>`
from within the method:

    method square(x:Real):Real {
        return x * x
    }

This defines a method which returns the value of its argument squared.

Annotations
-----------

The following [annotations](annotations.md) are legal on methods:

* [`@private`](annotations.md#private)
* [`@protected`](annotations.md#protected)
* [`@class`](annotations.md#class)
* [`@abstract`](annotations.md#abstract)
* [`@extendable`](annotations.md#extendable)
* [`@override`](annotations.md#override)
* [`@pre(...)`](annotations.md#pre)
* [`@preOr(...)`](annotations.md#preOr)
* [`@post(...)`](annotations.md#post)
* [`@postAnd(...)`](annotations.md#post)

Variable Parameters
-------------------

By default, method parameters behave as [defines](defines.md); that is, the object the method
parameter refers to may be modified, but the parameter may not be reassigned to point to a
different object.

    method example(param:MutableString) {
        param.append("this works!") -- legal!
        param := MutableString("this doesn't!") -- illegal, won't compile
    }
)

The `var` keyword turns a method parameter into an ordinary variable, which may then be freely
modified:

    method countDown(var i:Int) {
        while i > 0 {
            Console.printLine(i)
            i -= 1
        }
    }

Variable method parameters are treated as ordinary local variables, and reassigning the variable
does not affect anything outside of the method itself.

self
----

Within an instance method (including [functions](functions.md) and [inits](initMethods.md)), you
may refer to the object on which the method is running using the [`self` keyword](self.md).

Overriding Methods
------------------

Methods present in a superclass may be overridden by methods with the same signature present in a
subclass. For instance, given:

    @extendable
    class Super {
        @extendable
        method performFoo() {
            Console.printLine("superclass method!")
        }
    }

You may provide a different implementation of the method in a subclass:

    class Sub : Super {
        @override
        method performFoo() {
            Console.printLine("subclass method!")
        }
    }
)

The fact that the subclass method overrides the superclass method means it will be called instead of
its superclass equivalent when the object is of type `Sub`. The required `@override` annotation
prevents you from accidentally overriding superclass methods without realizing it.

Whenever the `performFoo` method is called, the right implementation of the method will be selected
at runtime based on the class of the object:

    var object := Super()
    object.performFoo() -- displays "superclass method!"
    object := Sub()
    object.performFoo() -- displays "subclass method!"

All parameter types and the return type of an override method must match exactly (including
[nullability](nonNullability.md)).

Calling superclass methods
--------------------------

When you have overridden a method, you may find yourself needing to call the superclass' version of
the method. For instance,

    @extendable
    class Text {
        @extendable
        method paint() {
            ...
        }
    }

    class UnderlinedText : Text {
        @override
        method paint() {
            ...
        }
    }
)

We would like to have `UnderlinedText` do whatever drawing `Text` does, and then
draw a line under the text. We can do this with the syntax `super.paint()`:

    class UnderlinedText : Text {
        method drawUnderline() {
            ...
        }

        @override
        method paint() {
            super.paint()
            drawUnderline()
        }
    }
)

The syntax `super.paint()` means "call the version of the method present in my superclass", in this
case `Text.paint()`.

Method Values
-------------

Methods and functions are *first-class* values in Frost, meaning that they can be stored in
variables, passed into and returned from methods, and otherwise be used as any other value would be.
There are three ways to use a method as a value:

[Inline methods](inlineMethods.md), such as:

    list.apply(method(s:String) {
        ...
    })

[Lambdas](inlineMethods.md#Lambdas), such as:
   
    list.fold((x, y) => x.union(y))
)

[Method References](methodReferences.md), such as:

    list.fold(Int.+)
