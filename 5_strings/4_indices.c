#include <stdio.h>

int main()
{
    char a[] = "hello world!";
    
    int l_count = 0;
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] == 'l') {
            l_count++;
        }
    }
    
    int l_array[l_count];
    for (int i = 0, l_index = 0; a[i] != '\0'; i++) {
        if (a[i] == 'l') {
            l_array[l_index++] = i;
        }
    }
    
    for (int i = 0; i < l_count; i++) {
        printf("%d ", l_array[i]);
    }
    printf("\n");
    return 0;
}
