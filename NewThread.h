//
// Created by adam on 11.05.17.
//

#ifndef CPPSANDBOX_NEWTHREAD_H
#define CPPSANDBOX_NEWTHREAD_H

#include "pthread.h"

class NewThread {

private:
    pthread_t thr;

public:
    NewThread();

    bool startNewThread();
    void waitForThreadToExit();

    virtual ~NewThread();

protected:
    virtual void threadStartRoutine() = 0;
};

#endif //CPPSANDBOX_NEWTHREAD_H
