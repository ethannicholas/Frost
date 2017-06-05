#include "Compiler.h"
#include "LLVMCodeGenerator.h"
#include "PandaParser.h"

#include "unistd.h"
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/wait.h>

#define LLC_PATH "/usr/bin/llc"
#define GCC_PATH "/usr/bin/gcc"
#define PANDA_HOME String("../src/")

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
    std::vector<String> sources;
    sources.push_back(PANDA_HOME + "panda/core/Bit.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int8.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int16.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int32.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int64.panda");
    sources.push_back(PANDA_HOME + "panda/core/Value.panda");
    sources.push_back(PANDA_HOME + "panda/io/Console.panda");
    String dest;
    for (int i = 1; i < argc; i++) {
        if (!strcmp(argv[i], "-o")) {
            ++i;
            ASSERT(i < argc);
            dest = argv[i];
        }
        else {
            sources.push_back(argv[i]);
        }
    }
    std::vector<ASTNode> parsed;
    const char* llvm = "/tmp/output.ll";
    {
        std::ofstream out(llvm);
        LLVMCodeGenerator codeGenerator(&out);
        ErrorReporter errors;
        Compiler compiler(&codeGenerator, &errors);
        std::vector<String> names;
        for (auto path : sources) {
            names.push_back(path.substr(path.find_last_of("/\\") + 1));
            parsed.emplace_back();
        }
        for (int i = 0; i < sources.size(); i++) {
            std::ifstream in(sources[i]);
            if (in.fail()) {
                printf("error reading %s\n", sources[i].c_str());
                exit(1);
            }
            std::string text((std::istreambuf_iterator<char>(in)),
                                std::istreambuf_iterator<char>());
            if (PandaParser(&errors).file(&names[i], text, &parsed[i])) {
                compiler.scan(&parsed[i]);
            }
            else {
                ASSERT(errors.fErrorCount);
            }
        }
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
    make_executable(llvm, dest.c_str());
}