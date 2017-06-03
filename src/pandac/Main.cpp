#include "Compiler.h"
#include "LLVMCodeGenerator.h"
#include "PandaParser.h"

#include "unistd.h"
#include <string>
#include <fstream>

#define LLC_PATH "/opt/local/libexec/llvm-3.8/bin/llc"
#define GCC_PATH "/usr/bin/gcc"

void make_executable(const char* llvm, const char* dest) {
    const char* tmp = "/tmp/output.s";
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (!pid) {
        // child
        char* args[5];
        args[0] = (char*) LLC_PATH;
        args[1] = (char*) llvm;
        args[2] = (char*) "-o";
        args[3] = (char*) tmp;
        args[4] = nullptr;
        execv(LLC_PATH, args);
        perror("llc exec failed");
        exit(1);
    }
    // parent
    int status;
    waitpid(pid, &status, 0);
    if (status) {
        printf("llc failed with exit code %d\n", WEXITSTATUS(status));
        exit(1);
    }

    pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (!pid) {
        // child
        char* args[5];
        args[0] = (char*) GCC_PATH;
        args[1] = (char*) tmp;
        args[2] = (char*) "-o";
        args[3] = (char*) dest;
        args[4] = nullptr;
        execv(GCC_PATH, args);
        perror("gcc exec failed");
        exit(1);
    }
    // parent
    waitpid(pid, &status, 0);
    if (status) {
        printf("gcc failed with exit code %d\n", status);
        exit(1);
    }
}

void reportErrors(ErrorReporter& errors) {
    printf("%d %s\n", errors.fErrorCount, errors.fErrorCount == 1 ? "error" : "errors");
}

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
    ASTNode parsed;
    ErrorReporter errors;
    if (PandaParser(&errors).file(name, text, &parsed)) {
        const char* llvm = "/tmp/output.ll";
        {
            std::ofstream out(llvm);
            LLVMCodeGenerator codeGenerator(&out);
            Compiler compiler(&codeGenerator, &errors);
            compiler.scan(&parsed);
            if (errors.fErrorCount) {
                reportErrors(errors);
                exit(1);
            }
            compiler.compile();
            if (errors.fErrorCount) {
                reportErrors(errors);
                exit(1);
            }
        }
        make_executable(llvm, argv[2]);
    }
    else {
        printf("%s:%d:%d: %s\n", name.c_str(), error.fLine, error.fColumn, error.fMessage.c_str());
    }
}