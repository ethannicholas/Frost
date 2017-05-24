#pragma once

#include "Symbol.h"
#include "Util.h"

#include <unordered_map>

class SymbolTable {
public:
    SymbolTable() {}

    SymbolTable(std::shared_ptr<SymbolTable> parent)
    : fParent(std::move(parent)) {}

    void add(std::unique_ptr<Symbol> symbol) {
        fSymbols[symbol->fName] = symbol.get();
        SymbolTable* owner = this;
        while (owner->fParent) {
            owner = owner->fParent.get();            
        }
        owner->fOwned.push_back(std::move(symbol));
    }

    Symbol* operator[](String name) const {
        auto found = fSymbols.find(name);
        if (found != fSymbols.end()) {
            return found->second;
        }
        if (fParent) {
            return (*fParent)[name];
        }
        return nullptr;
    }

private:
    std::shared_ptr<SymbolTable> fParent;

    std::unordered_map<String, Symbol*> fSymbols;

    std::vector<std::unique_ptr<Symbol>> fOwned;

    friend class IRGenerator;
};