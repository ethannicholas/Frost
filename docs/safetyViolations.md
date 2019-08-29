Safety Violations
=================

A *safety violation* occurs when a Frost program breaks certain rules of correct programming while
running. Safety violations are normally detected and result in the program terminating abnormallywith an
error message. Safety violations include:

* Assertion failures
* Contract (precondition or postcondition) violations
* Invalid typecasts
* Integer divide by zero
* Reaching an [`unreachable`](statements.html#unreachable) statement
* Following a [weak reference](weakReferences.html) to an object which is no longer in memory

By default, the compiler inserts runtime checks to detect all of these situations and abort the
program when they occur. Disabling safety checks using a [command line flag](frostc.html) may
improve performance, but converts all safety violations into undefined behavior.