Init Methods
============

An *init method* is a special kind of [method](methods.html) which is used when creating new
objects. The syntax for init methods is:

    class Foo {
        init(<parameters>) {
            <statements>
        }
    }

`init` parameters are defined just like other method parameters, but unlike normal methods,
`init` methods do not have a name or return type. `init` methods are implicitly invoked when
creating new objects. For instance, if we define a `Point` class as follows:

    class Point : Immutable {
        def x:Int
        def y:Int

        constructor(x:Int, y:Int) {
            self.x := x
            self.y := y
        }
    }

we can create a new `Point` as follows:

    def point := Point(5, 7)

This will create a new `Point` object and invoke its `init` method with parameters
`5` and `7`.

Default Init Methods
--------------------

If a class does define any `init` methods, the compiler automatically provides it with a *default
init*. The default init looks like:

    init() {
    }

In other words, it is public, takes no parameters and does nothing. Defining any other `init`
methods will suppress the default `init`. You may wish to create non-instantiable objects by
defining:

    class CannotCreate {
        @private
        init() {
        }
    }

Assuming this is the only `init` method, no one outside of this source code file can create an
instance of the class.

Init Rules
----------

The object must be *fully initialized* before calling any instance methods on it or returning from
the `init` method. An object is fully initialized when all of its fields which do not have
[default values](defaultValues.html) have been initialized and a superclass `init` method has been
invoked.

Calling Superclass Inits
------------------------

Frost requires a superclass `init` method to be invoked after the subclass initializes its own
fields, and before the subclass calls any instance methods.

If you do not explicitly invoke another `init` method, Frost inserts an implicit call to the
no-argument superclass `init` method, exactly as if your `init` method ended with a call to
`super.init()`. Of course, if there is no no-argument superclass `init`, or if it is not legal to
call the superclass `init` at this point (because you have already called an instance method), an
error will be generated.

Invoking Other Constructors
---------------------------

You may directly call another `init` method in order to delegate to it, as in:

    class Error {
        def msg:String

        init(msg:String) {
            self.msg := msg
        }

        init(file:Path, line:Int) {
            init("error at \{file.name()}:\{line}")
        }
    }

The object is considered to be fully initialized after the call to the other `init` method resolves.
The call to the other `init` method need not be the very first thing that happens, but the object
must be fully initialized prior to calling any instance methods on it.

An init method may only call *one* other init method, whether it delegates to a `self` or to a
`super` `init` method.
