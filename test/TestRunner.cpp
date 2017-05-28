#include "dirent.h"
#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"
#include <fstream>
#include <string>

#define OUTPUT_LOCATION "/tmp/out"

typedef std::string String;

String compileProgram(const char* pandac, const char* testdir, const char* name) {
    // run pandac
    String panda = String(testdir) + "/" + name + ".panda";
    int pipefd[2];
    if (pipe(pipefd)) {
        perror("error opening pipe");
        exit(1);
    }
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (!pid) {
        // child
        close(pipefd[0]);
        if (dup2(pipefd[1], 1) == -1) {
            perror("dup2 onto stdout failed");
            exit(1);
        }
        if (dup2(pipefd[1], 2) == -1) {
            perror("dup2 onto stderr failed");
            exit(1);
        }
        char* args[4];
        args[0] = (char*) pandac;
        args[1] = (char*) panda.c_str();
        args[2] = (char*) OUTPUT_LOCATION;
        args[3] = nullptr;
        execv(pandac, args);
        perror("error exec'ing pandac");
        exit(1);
    }
    else {
        // parent
        close(pipefd[1]);
        String result;
        char buffer[1024];
        ssize_t count;
        while ((count = read(pipefd[0], buffer, sizeof buffer)) > 0) {
            result.append(buffer, count);
        }
        if (count < 0) {
            perror("read from pipe failed");
        }
        int status;
        waitpid(pid, &status, 0);
        close(pipefd[0]);
        return result;
    }
}

bool runTest(const char* pandac, const char* testdir, const char* name) {
    printf("Testing %s... ", name);
    String expectedPath = String(testdir) + "/" + name + ".expected";
    std::ifstream in(expectedPath.c_str());
    String expected((std::istreambuf_iterator<char>(in)),
            std::istreambuf_iterator<char>());
    if (expected.size() == 0) {
        printf("error reading %s\n", expectedPath.c_str());
        exit(1);
    }

    String compileResult = compileProgram(pandac, testdir, name);
    if (compileResult.size()) {
        if (compileResult != expected) {
            printf("error, expected:\n%s\nbut received:\n%s", expected.c_str(),
                    compileResult.c_str());
            return false;
        }
        printf("success!\n");
        return true;
    }

    // run program
    int pipefd[2];
    if (pipe(pipefd)) {
        perror("error opening pipe");
        exit(1);
    }
    pid_t pid = fork();
    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }
    if (!pid) {
        // child
        close(pipefd[0]);
        if (dup2(pipefd[1], 1) == -1) {
            perror("dup2 onto stdout failed");
            exit(1);
        }
        if (dup2(pipefd[1], 2) == -1) {
            perror("dup2 onto stderr failed");
            exit(1);
        }
        char* args[2];
        args[0] = (char*) OUTPUT_LOCATION;
        args[1] = nullptr;
        execv(OUTPUT_LOCATION, args);
        perror("error exec'ing testcase");
        exit(1);
    }
    else {
        // parent
        close(pipefd[1]);
        String result;
        char buffer[1024];
        ssize_t count;
        while ((count = read(pipefd[0], buffer, sizeof buffer)) > 0) {
            result.append(buffer, count);
        }
        if (count < 0) {
            perror("read from pipe failed");
        }
        int status;
        waitpid(pid, &status, 0);
        close(pipefd[0]);
        if (result != expected) {
            printf("error, expected:\n%s\nbut received:\n%s", expected.c_str(), result.c_str());
            return false;
        }
        printf("success!\n");
        return true;
    }
}

int main(int argc, const char** argv) {
    if (argc != 3) {
        printf("usage: test <pandac path> <test dir>");
        exit(1);
    }
    const char* pandac = argv[1];
    const char* tests = argv[2];
    DIR *dir;
    struct dirent *entry;
    dir = opendir(tests);
    if (!dir) {
        printf("error reading directory '%s'\n", tests);
        exit(1);
    }
    int total = 0;
    int success = 0;
    while ((entry = readdir(dir))) {
        size_t len = strlen(entry->d_name);
        if (len > strlen(".panda") && !strcmp(entry->d_name + len - strlen(".panda"), ".panda")) {
            entry->d_name[len - strlen(".panda")] = 0;
            ++total;
            if (runTest(argv[1], argv[2], entry->d_name)) {
                ++success;
            }
        }
    }
    closedir(dir);
    printf("Passed %d / %d tests.\n", success, total);
}