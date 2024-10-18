#include "termdrawc.h"
#include <windows.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>
#include <process.h>

#define MAX_THREADS 32

void ThreadLoop();
void ShutDown();

HANDLE hKeysPressed;
HANDLE hRunning;
HANDLE hTermkey;
BOOL terminate;
int ThreadCount = 0;

HANDLE hThreads[MAX_THREADS] = { NULL };

int starttermdraw() {
    
    hKeysPressed = CreateMutexW(NULL, FALSE, NULL); 
    hRunning = CreateMutexW(NULL, TRUE, NULL);

   


    ShutDown();
    
    if (hKeysPressed) CloseHandle(hKeysPressed);
    if (hRunning) CloseHandle(hRunning);
    return 0;
}

void ShutDown() {
    while (ThreadCount > 0) {
        WaitForSingleObject(hThreads[--ThreadCount], INFINITE);
    }

    WaitForSingleObject(hKeysPressed, INFINITE);

}
