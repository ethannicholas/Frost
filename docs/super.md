super
=====

`super` is a [keyword](keywords.html) which can be used as the target of a method call, like this:

    method applyDefaultSettings() {
        super.applyDefaultSettings()
        setBackground(Color.BLUE)
    }

`super` is used to call the superclass' implementation of a method. In this case,
`applyDefaultSettings()` first runs the superclass' version of `applyDefaultSettings()` before
applying its own modifications.
