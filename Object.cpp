//
// Created by Adam Ujvari on 2017. 05. 08..
//

#include "Object.h"
#include <string.h>
#include <iostream>
#include <math.h>

Object::Object( ) {
    last_added = NULL;
    element_lock_ = PTHREAD_MUTEX_INITIALIZER;
}

void* Object::addNewElement(char *name, int time) {
    Element* new_element = new Element;

    strcpy(new_element->name_, name);
    new_element->time_ = time;

    pthread_mutex_lock(&element_lock_);
    new_element->next_ = last_added;
    last_added = new_element;
    pthread_mutex_unlock(&element_lock_);
}

void* Object::printStatus() {
    Element* element = last_added;
    printf("Obj. Name | -time | status\n");

    // lock
    while (element->next_ != NULL){

        int min = (int)floor(element->time_/60);
        int sec = element->time_%60;

        char status[10];
        (min+sec) ? strcpy(status, "in flight") : strcpy(status, "on ground");

        printf("%10s  %2i:%2i  %s", element->name_, min, sec, status);
    }
}

Object::~Object() {

}