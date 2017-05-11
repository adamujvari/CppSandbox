//
// Created by Adam Ujvari on 2017. 05. 08..
//

#ifndef CPPSANDBOX_INPUTHANDLER_H
#define CPPSANDBOX_INPUTHANDLER_H

#include <iostream>
#include <pthread.h>
#include "NewThread.h"

class InputHandler : public NewThread {

public:
    InputHandler();
    virtual void threadStartRoutine(void*);
    static void wrongUsage();
    static void printHelp();
};


#endif //CPPSANDBOX_INPUTHANDLER_H
