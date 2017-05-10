//
// Created by Adam Ujvari on 2017. 05. 08..
//

#ifndef CPPSANDBOX_OBJECT_H
#define CPPSANDBOX_OBJECT_H

#include "pthread.h"

class Object {

private:
    struct Element {
        char name_[16];
        int time_;
        Element* next_;
    } ;

    Element* last_added;
    pthread_mutex_t element_lock_;

public:
    Object();

    void* addNewElement(char* name, int time);

    void* printStatus();

    virtual ~Object();
};

#endif //CPPSANDBOX_OBJECT_H
