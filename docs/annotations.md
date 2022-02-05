Annotations
===========

Annotations are special tokens attached to [classes](classes.md), [fields](fields.md), or
[methods](methods.md). These tokens provide additional information about the entities they are
attached to. Annotations come directly before the entity they describe, as in:

    @protected
    @pre(!closed)
    method sayHello() {
        ...
    }

<a name="protected"></a>
@protected
----------

The `@protected` annotation on a class member signifies that the member is only accessible within
subclasses of the class.

<a name="package"></a>
@package
----------

Classes and class members annotated with `@package` are only accessible from within the same
package.

<a name="private"></a>
@private
--------

Classes and class members annotated with `@private` are only accessible from within the same source
code file.

<a name="class"></a>
@class
------

`@class` methods belong to the class as a whole, rather than any single instance 
of the class.

<a name="thread"></a>
@thread
-------

`@thread` fields are shared on a per-[thread](threads.md) basis. Each thread "sees" a different
copy of the field.

<a name="abstract"></a>
@abstract
---------

`@abstract` may be applied to classes or to methods.

An *abstract class* may not be instantiated. Abstract classes are often incomplete, and rely on
subclasses to fill in their missing functionality.

*Abstract methods* are methods which do not have an implementation. They just have a signature, with
no body, meaning that they are declared like:

    @abstract
    method abstractExample(s:String):Int
    
Abstract methods may only appear within abstract classes. If you subclass an abstract class, you
must either override all of its abstract methods (with non-abstract methods) or mark the subclass
abstract as well.

<a name="extendable"></a>
@extendable
-------

An `@extendable` class can be subclassed.

An `@extendable` method can be overridden in subclasses.

<a name="override"></a>
@override
---------

`@override` marks a method as overriding the equivalent method in a supertype. The `@override`
annotation is required as safety feature, to prevent accidental overrides and catch situations where
you have failed to properly override a parent method.

<a name="pre"></a>
@pre(&lt;expression>)
---------------------

Establishes a precondition on a method. A precondition is an expression that must evaluate to true
for the method invocation to be valid. For example, a method that calculates a square root might use
`@pre(x >= 0)` to indicate that it cannot handle square roots of negative numbers.

Violating a precondition normally causes the program to crash with an error message. When safety
checks are disabled, violating a precondition leads to undefined behavior.

<a name="preOr"></a>
@preOr(&lt;expression>)
-----------------------

Weakens (expands) a precondition of an overridden method. A call to a method is valid if *any* 
`@pre` or `@preOr` annotation in effect on it evaluates to true. The only difference is that `@pre`
is used for non-`@override` methods, and `@preOr` is used for `@override` methods.

<a name="post"></a>
@post(&lt;expression>)
----------------------

Establishes a postcondition on a method, A postcondition is an expression that must evaluate to true
when exiting the method). Postconditions are used to ensure that the method has done its job
properly by double-checking the results. Within a `@post()` expression, two special kinds of
expressions are supported:

* `@return` - whatever value the method returned
* `@pre(<expression>)` - what the expression was equal to when the method was first entered

For instance, suppose we have this simple method:

    @post(list.length = @pre(list.length + 1))
    method add(value:Object) {
        list.append(value)
    }

The postcondition on this method ensures that `list` is in fact one element longer when the method
finishes. Of course, it probably isn't worth using a postcondition like this where it is patently
obvious that the method is behaving correctly, but for more complex situations postconditions can
turn difficult-to-find problems into obvious failures at exactly the point where things went wrong.

Violating a postcondition normally causes the program to crash with an error message. When safety
checks are disabled, violating a postcondition leads to undefined behavior.

<a name="postAnd"></a>
@postAnd(&lt;expression>)
-------------------------

Strengthens a postcondition found in an overridden method. A method must fulfill all of the `@post`
and `@postAnd` conditions in effect on it.

<a name="weak"></a>
@weak
-----

Causes a field to only weakly refer to its contents, meaning that this reference does not
participate in reference counting and will not prevent an object from being destroyed.

Attempting to accessing a weakly referenced object after its destruction normally causes the
program to crash with an error message. When safety checks are disabled, accessing a destroyed
object leads to undefined behavior.

<a name="limited"></a>
@limited
--------

Used on a method to indicate that the method only modifies the containing object, objects it
*wholly owns* (objects which are never visible outside of the containing object), or its parameters.

Because of these restrictions, methods marked `@limited` may safely be used from
[functions](functions.md), as long as the object the method is being called on was created within
the function and is not visible from outside the function, and any mutable parameters are similarly
only visible from within the function.

<a name="self"></a>
@self
-----

Similar to `@limited`, but indicates that the method only modifies its containing object (not any of
its parameters).

<a name="safeReturn"></a>
@safeReturn
-----------

Indicates that there are no references to the return value of a method when the method exits; in
other words, the method's return value was either created within the method or is the result of
another `@safeReturn` method, and no persistent references to the value have been created within the
method call. 

This is important to allow functions to operate on values returned from other methods: without a
`@safeReturn` annotation, the compiler must assume that any mutable value returned from any method
is potentially visible and therefore cannot be modified.

<a name="unsafeFunction"></a>
@unsafeFunction
---------------

Indicates that a [function](functions.md) performs prohibited operations. Unsafe functions are
allowed to call methods, modify variables, and otherwise modify state, and the `@unsafeFunction`
indicates that they should still be treated as functions by the compiler.

This is, as the name implies, unsafe. The compiler is permitted to elide calls to functions, compute
their return values at compile time, merge multiple calls together, and so forth, all of which can
potentially result in incorrect behavior in the face of functions which do not "follow the rules".

<a name="external"></a>
@external(&lt;name>)
---------

The `@external` annotation marks a method which is implemented by external (non-Frost) code. `name`
is the name of the (C calling convention) external function to link to. Like abstract methods,
external methods do not have a method body.
