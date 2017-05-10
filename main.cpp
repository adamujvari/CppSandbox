#include <iostream>
#include <pthread.h>
#include "InputHandler.h"
#include "Object.h"

using namespace std;

int main(int argc, char* argv[]) {

    pthread_t input_handler_thr;

    Object();
    InputHandler InputHandler(&input_handler_thr);

    cout << "Init done.\n" << endl;

    int check = pthread_join(input_handler_thr, NULL);
    if (check != 0) return 1;
    // cancel other threads

    return 0;
}