Functions
=========

A `function` is a method which has two special restrictions:

1. Functions may not depend upon unpredictable state
2. Functions may not have side effects

Functions are declared exactly like other methods, but with the `function` keyword replacing the
`method` keyword:

    function square(x:Real):Real {
        return x * x
    }

Note that functions are still considered methods, just methods with additional restrictions. The
"may not depend upon unpredictable state" restriction is the simplest, because it does not generally
affect pure Panda code. "Unpredictable" state is state which could change without Panda's knowledge;
for instance, whether or not a file exists on the filesystem is "unpredictable" in that a program
could check for the file's existence multiple times and receive a different answer each time,
without having done anything to the filesystem itself. The `File.exists()` method is therefore a
method, rather than a function. If your program is written in 100% Panda and you do not use any
of the (clearly marked) unsafe APIs, you should never need to worry about this restriction.

"Side effects" are defined in Panda as "making changes to state which are visible outside of the
function itself". Functions may freely modify state that only they can see; for instance, the
following function is legal:

    function getName():String {
        def result := MutableString()
        result.append(lastName)
        if firstName != null {
            result.append(", " + firstName)
            if middleName != null {
                result.append(" " + middleName)
            }
        }
        return result.finish()
    }
)

This function creates a mutable object and manipulates it -- clearly it is modifying state! However,
the `MutableString` is not visible outside of the function itself, and the `append` and `finish`
methods do not modify anything but the `MutableString` in question. Therefore, this code does not
result in any data visible outside of the function itself changing, and is legal.

In order to comply with the "no side effects" restriction, a function may only call non-function
methods when:

1. The method is marked [`@self`](annotations.html#self) and the object to which the method belongs
   is not visible outside the function
2. The method is marked [`@limited`](annotations.html#limited) and neither the object to which the
   method belongs nor any of the method's mutable parameters are visible outside the function

For an object to be "not visible outside the function", it must have been created inside the
function itself by an `@self` constructor. Note that constructors are *automatically* flagged
`@self` when they comply with the `@self` restrictions; you do not need to manually add this
annotation to your constructors, and in practice the vast majority of constructors will be 
considered `@self`.

You should be in the habit of using functions where possible. They provide strong data integrity
guarantees and make it easier to write high-quality code. Furthermore, functions enable
optimizations that would otherwise not be possible: for instance, if you make multiple calls to the
`getName()` function above, the compiler may be able to prove that no state has changed between the
calls and therefore it is safe to simply re-use the resulting string rather than recalculate it.

Inline Functions
----------------

See [inline functions](inlineMethods.html) for more information.
