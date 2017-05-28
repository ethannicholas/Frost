#pragma once

#include "Methods.h"
#include "Symbol.h"
#include "Util.h"

#include <unordered_map>

class SymbolTable {
public:
    SymbolTable()
    : fParent(nullptr) {
        static bool rootCreated = false;
        ASSERT(!rootCreated);
        rootCreated = true;
    }

    SymbolTable(const SymbolTable* parent)
    : fParent(parent) {}

    SymbolTable(const SymbolTable&) = delete;

    void add(String name, std::unique_ptr<Symbol> symbol) {
        auto found = fSymbols.find(name);
        if (found != fSymbols.end()) {
            if (symbol->fKind == Symbol::Kind::METHOD) {
                switch (found->second->fKind) {
                    case Symbol::Kind::METHODS:
                        ((Methods&) *found->second).fMethods.push_back(std::unique_ptr<Method>(
                                (Method*) symbol.release()));
                        return;
                    case Symbol::Kind::METHOD: {
                        std::vector<std::unique_ptr<Method>> methods;
                        methods.push_back(std::unique_ptr<Method>(
                                (Method*) found->second.release()));
                        methods.emplace_back((Method*) symbol.release());
                        fSymbols[name] = std::unique_ptr<Symbol>(new Methods(std::move(methods)));
                        return;
                    }
                    default:
                        break;
                }
            }
            this->error(symbol->fPosition, "duplicate symbol '" + name + "' (previous declaration "
                    "at " + fSymbols[symbol->fName]->fPosition.description().c_str() + ")");
        }
        fSymbols[name] = std::move(symbol);
    }

    void add(std::unique_ptr<Symbol> symbol) {
        this->add(symbol->fName, std::move(symbol));
    }

    Symbol* operator[](String name) const {
        auto found = fSymbols.find(name);
        if (found != fSymbols.end()) {
            return found->second.get();
        }
        if (fParent) {
            return (*fParent)[name];
        }
        return nullptr;
    }

    template <typename iterFunction> // f(const Symbol&)
    void foreach(iterFunction&& fn) const {
        for (auto iter = fSymbols.begin(); iter != fSymbols.end(); ++iter) {
            fn((const Symbol&) *iter->second);
        }
    }    

    void error(Position position, String text) {
        printf("%s: %s\n", position.description().c_str(), text.c_str());
    }

private:
    const SymbolTable* fParent;

    std::unordered_map<String, std::unique_ptr<Symbol>> fSymbols;

    friend class Compiler;
};