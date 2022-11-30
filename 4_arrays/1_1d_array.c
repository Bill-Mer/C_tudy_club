#include <stdio.h>

int main() {
    int array[10];

    // we observe that all elements of the array have the same value and index
    // thus we use the same number to initialize its values
    for (int i=0; i<10; i++) {
        array[i] = i;
    }

    // print values
    for (int i=0; i<10; i++) {
        printf("%d ", i);
    }
    return 0;
}