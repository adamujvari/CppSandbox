#include <iostream>
#include <pthread.h>
#include "InputHandler.h"
#include "Object.h"

using namespace std;

int main(int argc, char* argv[]) {

    pthread_t input_handler_thr;

    Object object;
    InputHandler handler;

    int check = handler.startNewThread();
    check ? printf("input thread not created.\n") : printf("input thread created\n");

    cout << "Init done.\n" << endl;

    handler.waitForThreadToExit();

    return 0;
}