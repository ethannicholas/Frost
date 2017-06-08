#pragma once

#include "Methods.h"
#include "Symbol.h"
#include "Util.h"

#include <map>

class SymbolTable {
public:
    SymbolTable() {
        static bool rootCreated = false;
        ASSERT(!rootCreated);
        rootCreated = true;
    }

    SymbolTable(const SymbolTable* parent, const Class* cl)
    : fClass(cl) {
        fParents.push_back(parent);
    }

    SymbolTable(const SymbolTable&) = delete;
    SymbolTable(SymbolTable&&) = default;
    SymbolTable& operator=(SymbolTable&& src) = default;

    void add(String name, std::unique_ptr<Symbol> symbol) {
        this->addAlias(name, symbol.get());
        fOwnedPtrs.push_back(std::move(symbol));
    }

    void add(std::unique_ptr<Symbol> symbol) {
        String name = symbol->fName;
        this->add(name, std::move(symbol));
    }

    void addAlias(String name, Symbol* symbol) {
        auto found = fSymbols.find(name);
        if (found != fSymbols.end()) {
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

    Symbol* operator[](String name) const {
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

    template <typename iterFunction> // f(Symbol&)
    void foreach(iterFunction&& fn) {
        for (auto iter = fSymbols.begin(); iter != fSymbols.end(); ++iter) {
            fn(*iter->second);
        }
    }    

    template <typename iterFunction> // f(const Symbol&)
    void foreach_const(iterFunction&& fn) const {
        for (auto iter = fSymbols.begin(); iter != fSymbols.end(); ++iter) {
            fn((const Symbol&) *iter->second);
        }
    }    

    void error(Position position, String text) {
        printf("%s: %s\n", position.description().c_str(), text.c_str());
    }

    const Class* fClass;

private:
    std::vector<const SymbolTable*> fParents;

    std::vector<std::unique_ptr<Symbol>> fOwnedPtrs;

    std::map<String, Symbol*> fSymbols;

    friend class Compiler;
};