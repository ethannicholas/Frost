#include "PandaParser.h"

#include <string>
#include <fstream>

int main(int argc, char** argv) {
    std::ifstream in(argv[1]);
    std::string text((std::istreambuf_iterator<char>(in)),
                        std::istreambuf_iterator<char>());
    if (in.fail()) {
        printf("error reading %s\n", argv[1]);
        exit(1);
    }
    ParseError error;
    if (!PandaParser().file(text, &error)) {
        printf("%d:%d: %s\n", error.fLine, error.fColumn, error.fMessage.c_str());
    }
}