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
    String path = String(argv[1]);
    String name = path.substr(path.find_last_of("/\\") + 1);
    ASTNode output;
    if (PandaParser().file(name, text, &output, &error)) {
        printf("%s\n", output.description().c_str());
    }
    else {
        printf("%s:%d:%d: %s\n", name.c_str(), error.fLine, error.fColumn, error.fMessage.c_str());
    }
}