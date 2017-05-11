//
// Created by Adam Ujvari on 2017. 05. 08..
//

#include "InputHandler.h"
#include "string.h"

using namespace std;

InputHandler::InputHandler() {
}

void InputHandler::threadStartRoutine(void*) {

    char input[255];
    char* tok1;
    char* tok2;
    char* tok3;

    while(1) {
        cout << "> ";
        scanf("%254s", input);
        tok1 = strtok(input, " \n");

        if (!strcmp(tok1, "add")) {
            tok2 = strtok(input, " \n");
            tok3 = strtok(input, " \n");

            if(tok2 == NULL || tok3 == NULL) {
                wrongUsage();
            } else {


            }

            tok2 = NULL;
            tok3 = NULL;

        } else if (!strcmp(tok1, "status")) {
            puts("status");

        } else if (!strcmp(tok1, "quit")) {
            pthread_exit(NULL);

        } else if (!strcmp(tok1, "help")) {
            printHelp();

        } else {
            wrongUsage();
        }
    }
}

void InputHandler::wrongUsage() {
    printf("Wrong usage. Type 'help' for list of commands.\n");
}

void InputHandler::printHelp() {
    printf("> <command> <*attr> <*attr> | *optional, required only with 'add'.\n");
    printf("> possibities:              |\n");
    printf(">  add <name> <time>        | adds a new element\n");
    printf(">                           | name: max length of 10, time: 'mm:ss'\n");
    printf(">  status                   | lists all elements until escaped.\n");
    printf(">  help                     | prints this box.\n");
    printf(">  quit                     | terminates all background processes and quits.\n");
}
