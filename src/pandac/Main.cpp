#include "Compiler.h"
#include "LLVMCodeGenerator.h"
#include "PandaParser.h"

#include "unistd.h"
#include <string>
#include <fstream>
#include <sys/types.h>
#include <sys/wait.h>

#define INNERSTRING(x) #x
#define STRING(x) INNERSTRING(x)
#define LLC_PATH (STRING(LLVM_DIR) "/bin/llc")
#define OPT_PATH (STRING(LLVM_DIR) "/bin/opt")
#define GCC_PATH "/usr/bin/gcc"
#define PANDA_HOME String("../src/")

void make_executable(const char* llvm, const char* dest) {
    const char* optimized = "/tmp/output.ll.opt";
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (!pid) {
        // child
        char* args[8];
        args[0] = (char*) OPT_PATH;
        args[1] = (char*) "-lint";
        args[2] = (char*) "-O3";
        args[3] = (char*) "-S";
        args[4] = (char*) llvm;
        args[5] = (char*) "-o";
        args[6] = (char*) optimized;
        args[7] = nullptr;
        execv(OPT_PATH, args);
        perror("opt exec failed");
        printf("(%s)\n", OPT_PATH);
        exit(1);
    }
    // parent
    int status;
    waitpid(pid, &status, 0);
    if (status) {
        printf("opt failed with exit code %d\n", WEXITSTATUS(status));
        exit(1);
    }

    const char* assembly = "/tmp/output.s";
    pid = fork();
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
        args[3] = (char*) assembly;
        args[4] = nullptr;
        execv(LLC_PATH, args);
        perror("llc exec failed");
        printf("(%s)\n", LLC_PATH);
        exit(1);
    }
    // parent
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
        char* args[7];
        args[0] = (char*) GCC_PATH;
        args[1] = (char*) assembly;
        args[2] = (char*) "-L.";
        args[3] = (char*) "-lpanda";
        args[4] = (char*) "-o";
        args[5] = (char*) dest;
        args[6] = nullptr;
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
    sources.push_back(PANDA_HOME + "panda/collections/Array.panda");
    sources.push_back(PANDA_HOME + "panda/collections/Collection.panda");
    sources.push_back(PANDA_HOME + "panda/collections/CollectionView.panda");
    sources.push_back(PANDA_HOME + "panda/collections/CollectionWriter.panda");
    sources.push_back(PANDA_HOME + "panda/collections/HashMap.panda");
    sources.push_back(PANDA_HOME + "panda/collections/Map.panda");
    sources.push_back(PANDA_HOME + "panda/collections/MapView.panda");
    sources.push_back(PANDA_HOME + "panda/collections/MapWriter.panda");
    sources.push_back(PANDA_HOME + "panda/collections/Iterable.panda");
    sources.push_back(PANDA_HOME + "panda/collections/Iterator.panda");
    sources.push_back(PANDA_HOME + "panda/collections/List.panda");
    sources.push_back(PANDA_HOME + "panda/collections/ListView.panda");
    sources.push_back(PANDA_HOME + "panda/collections/ListWriter.panda");
    sources.push_back(PANDA_HOME + "panda/collections/Stack.panda");
    sources.push_back(PANDA_HOME + "panda/core/Bit.panda");
    sources.push_back(PANDA_HOME + "panda/core/Char8.panda");
    sources.push_back(PANDA_HOME + "panda/core/Class.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int8.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int16.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int32.panda");
    sources.push_back(PANDA_HOME + "panda/core/Int64.panda");
    sources.push_back(PANDA_HOME + "panda/core/MutableString.panda");
    sources.push_back(PANDA_HOME + "panda/core/Object.panda");
    sources.push_back(PANDA_HOME + "panda/core/Panda.panda");
    sources.push_back(PANDA_HOME + "panda/core/Pointer.panda");
    sources.push_back(PANDA_HOME + "panda/core/Range.panda");
    sources.push_back(PANDA_HOME + "panda/core/String.panda");
    sources.push_back(PANDA_HOME + "panda/core/System.panda");
    sources.push_back(PANDA_HOME + "panda/core/Value.panda");
    sources.push_back(PANDA_HOME + "panda/io/Console.panda");
    sources.push_back(PANDA_HOME + "panda/io/File.panda");
    sources.push_back(PANDA_HOME + "panda/io/FileInputStream.panda");
    sources.push_back(PANDA_HOME + "panda/io/FileOutputStream.panda");
    sources.push_back(PANDA_HOME + "panda/io/IndentedOutputStream.panda");
    sources.push_back(PANDA_HOME + "panda/io/InputStream.panda");
    sources.push_back(PANDA_HOME + "panda/io/OutputStream.panda");
    sources.push_back(PANDA_HOME + "panda/math/Random.panda");
    sources.push_back(PANDA_HOME + "panda/math/XorShift128Plus.panda");
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