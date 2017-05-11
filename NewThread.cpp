//
// Created by adam on 11.05.17.
//

#include "NewThread.h"

NewThread::NewThread() {
}

bool NewThread::startNewThread() {
    return (pthread_create(&thr, NULL, threadStartRoutine, this)  == 0);
}

void NewThread::waitForThreadToExit() {
    (void) pthread_join(thr, NULL);
}

NewThread::~NewThread() {
}