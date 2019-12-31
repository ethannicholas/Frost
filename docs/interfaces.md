Interfaces
==========

An interface is a special kind of class which only has [methods](methods.md) and
[constants](constants.md), but no other kinds of fields. A [class](classes.md) may only have one
superclass, but it may have any number of superinterfaces. Interfaces are defined much like classes,
but with the `interface` keyword and abstract-by-default methods:

    interface Example {
        method exampleMethod(s:String):Bit
    }

Classes inherit from superinterfaces just like they do superclasses:

    class Foo : FooSuper, Example {
        @override
        method exampleMethod(s:String):Bit {
            ...
        }
    }

In addition to all the types `Foo` could normally be used as (itself, `FooSuper`, `Object`, etc.),
`Foo` is also an instance of `Example` and may be used wherever an `Example` is required.

Interfaces may themselves have superinterfaces:

    interface Example {
        method exampleMethod(s:String):Bit
    }

    interface BetterExample : Example {
        method betterExampleMethod(s:String, o:Object)
    }

Interfaces may even inherit from more than one parent interface:

    interface MultipleParents : BetterExample, AnotherInterface {
        ...
    }

Default Methods
---------------

All methods in an interface are abstract by default. You may annotate an interface method with
`@default` and provide an implementation in order to create a *default method*:

    interface Example {
        method exampleMethod(s:String):Bit

        @default
        method defaultMethod() {
            Console.printLine("this method has an implementation!")
        }
    }

A default method will be inherited by a class implementing this interface provided that it does not
already its own implementation of the method. If two or more interfaces provide a method with the
same signature, the interface listed first "wins" and its implementation will be used in preference
to interfaces listed later. For example, given the code:

    interface Example1 {
        method exampleMethod(s:String):Bit

        @default
        method defaultMethod() {
            Console.printLine("this method has an implementation!")
        }
    }

    interface Example2 {
        function someOtherMethod(r:Real64):Real64

        @default
        method defaultMethod() {
            Console.printLine("this method also has an implementation!")
        }
    }    

    class Foo : Example2, Example1 {
        @override
        method exampleMethod(s:String):Bit {
            ...
        }

        @override
        function someOtherMethod(r:Real64):Real64 {
            ...
        }
    }

The statement `Foo().defaultMethod()` will result in the output
`"this method also has an implementation!"`. `defaultMethod()` implementations are present in both
`Example1` and `Example2`, but as class Foo lists `Example2` first, that interface's implementation
of `defaultMethod()` will be inherited. If `Foo` defined its own implementation of `defaultMethod`
(or inherited one from a superclass), it would be used in preference to either interface's default
implementation.

