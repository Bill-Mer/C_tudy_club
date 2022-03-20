#include <stdio.h>

int main() {
    float array[] = {0.0, 0.1, 0.2, 0.3, 0.4};
    float sum = 0;

    // find sum
    for (int i=0; i<5; i++) {
        sum += array[i];
    }
    printf("%f\n", sum);
    return 0;
}