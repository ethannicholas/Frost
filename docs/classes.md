Classes
=======

A *class* in Frost represents a kind of object. Classes contain [fields](fields.html) (data values)
and [methods](methods.html) (actions). Every Frost value other than [`null`](null.html) is an
object, and therefore an instance of a class. Classes are defined using the syntax:

    class <name> {
        <members>
    }

    class <name> : <supertype1>, <supertype2>... {
        <members>
    }

A *member* is a [method](methods.html) or [field](fields.html) contained by the object. For example,
here is a simple class containing two fields:

    class Point {
        var x:Int
        var y:Int
    }

Because `Point` does not specify a supertype, it descends from `frost.core.Object`. Its two fields,
`x` and `y`, are public by default (that is, any other class is free to read and modify them).

You would create an instance of `Point` using the expression `Point()`, like this:

    def p := new Point()
    p.x := 5
    p.y := 7
    Console.writeLine("The point is: \{p.x}, \{p.y}")

It would be more convenient to be able to create and initialize a `Point` in a
single step. We can define a special kind of method, an [`init` method](initMethods.html), to
simplify the initialization. Since `Point` is then initialized as soon as it is created, we no
longer need to allow it to be modified after creation. Our new and improved `Point` class looks
like:

    class Point : Immutable {
        def x:Int
        def y:Int

        init(x:Int, y:Int) {
            self.x := x
            self.y := y
        }
    }

We now create instances of `Point` using expressions of the form `Point(5, 7)`, which simplifies our
earlier example to:

    def p := new Point(5, 7)
    Console.writeLine("The point is: \{p.x}, \{p.y}")

Inheritance
-----------

Classes may *inherit* from another class to extend or modify the parent class' behavior. In the real
world, we might say that the Human class extends the Primate class, which in turn extends the Mammal
class, and so forth. At each step, we add new traits which specialize the class further. We could
express this concept in Frost as follows:

    class Mammal : Synapsid {
        ...
    }

    class Primate : Mammal {
        ...
    }

    class Human : Primate {
        ...
    }

Each child class (subclass) inherits all of the fields and methods (other than `init` methods) from
its parent class (superclass), and may be used anywhere the parent class is expected. That is, all
`Human` objects are also `Mammal` objects. Subclasses may add additional fields and methods, as well
as override (replace) methods inherited from their parent classes. Methods are overridden by
defining a new method with the same signature and the `@override` [annotation](annotations.html),
such as:

    class Human : Primate {
        @override -- required, or a compilation error will occur
        method think() {
            -- we're better at this than our ancestors!
            ...
        }
    }

All classes ultimately inherit from [frost.core.Object]. If you do not specify a superclass, the
superclass defaults to `Object`.

A class may inherit from multiple types, but only one of these types may be a `class`. The other
types must all be [`interface`s](interfaces.html).
