Immutable
=========

Frost supports first-class immutable types. All immutable types descend from the class
[frost.core.Immutable]. By subclassing `Immutable`, you impose some restrictions on your class:

* All fields must be [defines](defines.html) or [constants](varsAndConstants.html#constants) rather
  than variables
* All fields must themselves be immutable types

These restrictions combine to ensure that it is not possible to modify data in any instance of an
immutable object. Immutable objects receive several benefits from this:

* They may be used as [constants](constants.html)
* They may be freely passed between [threads](threads.html)
* Various additional optimizations become available

And, of course, there's always the obvious "it's easier to reason about things when they can't
change out from under you" benefit.