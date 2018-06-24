Variables and Constants
=======================

Variables, defines, constants, and properties all have one thing in common: they associate a 
value with a name. For example, in the code:

    var x := 12
    Console.writeLine(x)

The statement `var x := 12` creates a new name, `x`, associated with the value
`12`. The subsequent `Console.writeLine(x)` references this value by name,
displaying `12`. The difference between the four entities is:

* [Variables](variables.html) (`var x`) can change. Subsequent assignment statements can associate a
  new value with the variable.
* [Defines](defines.html) (`def x`) cannot be reassigned. Once you have assigned a value into a
  define, you may not reassign a different value to the define. Defines may, however, be
  [mutable](immutable.html). This means that, while the define cannot be changed to point to a
  different object, the object that it is pointing to may itself be modified. 
* [Constants](constants.html) (`constant x`) are similar to defines, with the additional
  restrictions that their value must be immutable and must be assigned immediately.
* [Properties](properties.html) (`property x`) appear to be fields, but are actually implemented by
  get functions and set methods.