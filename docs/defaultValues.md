Default Values
==============

Several Frost [types](types.html) have a *default value*:

    * All `Int`s, `Real`s, and `Char`: `0`
    * `Bit`: `false`
    * Nullable types: `null`

[Fields](fields.html) in a newly-created object are initialized to their default value prior to the
[init method](initMethods.md)'s execution. [Non-nullable](nonNullability.html) types other than
those listed above do not have a default value; you may not read such fields before they are
assigned, and they must be initialized prior to invoking the superclass `init` method.
