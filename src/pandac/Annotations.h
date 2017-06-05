#pragma once

class Annotations {
public:
    enum Flag {
        PRIVATE   = 1 << 1,
        PROTECTED = 1 << 2,
        CLASS     = 1 << 3,
        OVERRIDE  = 1 << 4,
        EXTERNAL  = 1 << 5,
        IMPLICIT  = 1 << 6
    };

    Annotations()
    : fFlags(0) {}

    Annotations(int flags)
    : fFlags(flags) {}

    bool isPrivate() const {
        return (fFlags & PRIVATE) != 0;
    }

    bool isProtected() const {
        return (fFlags & PROTECTED) != 0;
    }

    bool isClass() const {
        return (fFlags & CLASS) != 0;
    }

    bool isOverride() const {
        return (fFlags & OVERRIDE) != 0;
    }

    bool isExternal() const {
        return (fFlags & EXTERNAL) != 0;
    }

    bool isImplicit() const {
        return (fFlags & IMPLICIT) != 0;
    }

private:
    int fFlags;
};