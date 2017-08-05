#include "SymbolTable.h"

#include "Methods.h"

void SymbolTable::addAlias(String name, Symbol* symbol) {
    auto found = fSymbols.find(name);
    if (found != fSymbols.end()) {
        if (found->second->fKind == Symbol::Kind::ALIAS && found->second->fPosition.fLine == -1) {
            fSymbols[name] = symbol;
            return;
        }
        if (symbol->fKind == Symbol::Kind::METHOD) {
            switch (found->second->fKind) {
                case Symbol::Kind::METHODS:
                    ((Methods&) *found->second).fMethods.push_back((Method*) symbol);
                    return;
                case Symbol::Kind::METHOD: {
                    std::vector<Method*> list;
                    list.push_back((Method*) found->second);
                    list.emplace_back((Method*) symbol);
                    Methods* methods = new Methods(std::move(list));
                    fSymbols[name] = methods;
                    fOwnedPtrs.push_back(std::unique_ptr<Symbol>(methods));
                    return;
                }
                default:
                    break;
            }
        }
        this->error(symbol->fPosition, "duplicate symbol '" + name + "' (previous declaration "
                "at " + found->second->fPosition.description().c_str() + ")");
    }
    fSymbols[name] = symbol;
}

Symbol* SymbolTable::operator[](String name) const {
    auto found = fSymbols.find(name);
    if (found != fSymbols.end()) {
        return found->second;
    }
    for (const auto parent : fParents) {
        Symbol* result = (*parent)[name];
        if (result) {
            return result;
        }
    }
    return nullptr;
}
