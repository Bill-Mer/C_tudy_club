#include <stdio.h>

int main() {
    int array[3][3];

    // we observe that each element's value is equal to 3 * row + column
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            array[row][col] = 3 * row + col;
        }
    }

    // print elements
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            printf ("%d ", array[row][col]);
        }
        printf("\n");  // new line after a row has finished
    }
    return 0;
}