#include "ParserGenerator.h"
#include "ParserGeneratorParser.h"

#include <fstream>

int main(int argc, const char** argv) {
    ASSERT(argc == 5, "wrong number of arguments");
    std::ifstream in(argv[1]);
    std::string text((std::istreambuf_iterator<char>(in)),
                        std::istreambuf_iterator<char>());
    if (in.fail()) {
        printf("error reading %s\n", argv[1]);
        exit(1);
    }

    ParserGenerator::ErrorReporter errorReporter;
    ParserGenerator::Parser parser(text, &errorReporter);
    ParserGenerator::Grammar grammar;
    if (parser.grammar(&grammar)) {
        ParserGenerator::ParserGenerator generator(argv[2], &grammar);
        generator.generate(argv[3], argv[4]);
    }
}