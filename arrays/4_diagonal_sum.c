#include <stdio.h>

int main() {
    int array[3][3];
    int sum = 0;

    // initialize values for the array
    for (int row=0; row<3; row++) {
        for (int col=0; col<3; col++) {
            array[row][col] = 3 * row + col;
        }
    }

    // main diagonal
    for (int i=0; i<3; i++) {
        // add array element to the sum and print it
        sum += array[i][i];
        printf("%d", array[i][i]);

        // if the loop is not inside the last iteration print '+'
        if (i != 2) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    // secondary diagonal
    for (int i=0, j=2; i<3 && j>=0; i++, j--) {
        // add array element to the sum and print it
        sum += array[i][j];
        printf("%d", array[i][j]);

        // if the loop is not inside the last iteration print '+'
        if (i != 2) {
            printf(" + ");
        }
    }
    printf(" = %d\n", sum);

    return 0;
}