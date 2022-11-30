#include <stdio.h>

int main() {
    // each number printed can be represented by i * j
    // let's say that i is the number whose multiples we want to print
    // then we have to multiply i with all numbers from 1 to 10; let's
    // say these are represented by j
    // we create 2 loops: one for i and one for j, then multiply them
    for (int i=1; i<=10; i++) {
        for (int j=1; j<=10; j++) {
            printf("%d ", i * j);
        }
        // print new line to change line when all the multiples of a 
        // number have been printed
        printf("\n");
    }
    return 0;
}
