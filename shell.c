#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX_CMD_LEN 1024 // Maximum command length

int main() {
    char cmd[MAX_CMD_LEN]; // Command buffer
    char *args[64]; // Arguments buffer
    char *arg; // Temporary argument buffer
    int status; // Exit status of child process
    pid_t pid; // Process ID of child process

    while(1) {
        printf("$ "); // Prompt for user input
        fgets(cmd, MAX_CMD_LEN, stdin); // Read command from user input
        if (strcmp(cmd, "exit\n") == 0) { // Exit if user enters "exit"
            exit(0);
        }

        // Parse command and arguments
        int i = 0;
        arg = strtok(cmd, " \n");
        while(arg != NULL && i < 64) {
            args[i++] = arg;
            arg = strtok(NULL, " \n");
        }
        args[i] = NULL;

        // Fork child process to execute command
        pid = fork();
        if (pid == 0) { // Child process
            execvp(args[0], args);
            fprintf(stderr, "Command not found\n");
            exit(1);
        } else if (pid > 0) { // Parent process
            wait(&status);
        } else { // Fork failed
            fprintf(stderr, "Fork failed\n");
            exit(1);
        }
    }

    return 0;
}

