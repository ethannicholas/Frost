Inner Methods
=============

An *inner method* is a method defined inside of another method:

    method dump() {
        method printNode(node:Node) {
            ...
        }

        children.apply(printNode)
    }

Inner methods are syntactic sugar for creating a [`define`](defines.html) with method type, so the
above example is exactly equivalent to:

    method dump() {
        def printNode := method(node:Node) {
            ...
        }

        children.apply(printNode)
    }
