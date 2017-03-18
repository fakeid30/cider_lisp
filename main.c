#include <stdio.h>
#include <stdlib.h>
#include "mpc.h"


#ifdef _WIN32

#include <string.h>

static char buffer[2048];

char* readline(char* prompt) {
    fputs(prompt, stdout);
    fgets(buffer, 2048, stdin);
    char* cpy= malloc(strlen(buffer)+1);
    strcpy(cpy,buffer);
    cpy[strlen(cpy)-1] = '\0';
    return cpy;
}

#else
#include <editline/readline.h>
#endif

int main() {

    puts("Lispy Version 0.0.0.0.1");
    puts("Press ctrl+c to exit");

    while (1) {
        char* input = readline("lispy name> ");

        add_history(input);

        printf("No you're not %s\n", input);

        free(input);
    }

    return 0;
}