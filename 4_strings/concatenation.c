#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "hello ";
    char b[] = "world!";
    char c[20];
    
    // solution 1: manual
    int a_index = 0, b_index = 0, c_index = 0;
    while (a[a_index] != '\0') {
        c[c_index] = a[a_index];
        c_index++;
        a_index++;
    }
    
    while (b[b_index] != '\0') {
        c[c_index] = b[b_index];
        c_index++;
        b_index++;
    }
    c[a_index + b_index] = '\0';
    
    // solution 2: quick and robust
    // strcpy(c, a);  // copy "hello "
    // strcpy(c + strlen(a), b);  // copy "world!"
    
    printf("%s\n", c);
    return 0;
}
