//
// Created by Adam Ujvari on 2017. 05. 08..
//

#ifndef CPPSANDBOX_INPUTHANDLER_H
#define CPPSANDBOX_INPUTHANDLER_H

#include <iostream>
#include <pthread.h>

class InputHandler {

public:
    InputHandler(pthread_t* thr);
    void* readInput(void*);
    static void wrongUsage();
};


#endif //CPPSANDBOX_INPUTHANDLER_H
