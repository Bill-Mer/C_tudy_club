#include <stdio.h>

int main()
{
    char input[60];
    
    fgets(input, 51, stdin);
    // or
    // fgets(input, 55, stdin);
    // input[51] = '\0';
    
    for (int i = 0; i <= 50; i++) {
        if (input[i] == '\n') {
            input[i] = '\0';
            break;
        } else if (input[i] == 'a') {
            input[i] = 'o';
        }
    }
    printf("%s", input);
    return 0;
}
