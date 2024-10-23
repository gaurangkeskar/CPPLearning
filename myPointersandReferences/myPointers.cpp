#include "myPointers.h"

void swapByReference(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByPointer(int* a, int* b) {
    if (a != nullptr && b != nullptr) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}
