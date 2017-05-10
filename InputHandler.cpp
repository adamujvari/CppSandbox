//
// Created by Adam Ujvari on 2017. 05. 08..
//

#include "InputHandler.h"
#include "string.h"

using namespace std;

InputHandler::InputHandler(pthread_t* thr) {

    pthread_create(thr, NULL, &InputHandler::readInput, thr);

}

void* InputHandler::readInput(void *) {

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
            puts("help");

        } else {
            wrongUsage();
        }
    }
}

void InputHandler::wrongUsage() {
    puts("Wrong usage. Type 'help' for list of commands.");
}