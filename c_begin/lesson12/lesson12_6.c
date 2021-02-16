/*
 * start_c/c_begin/lesson12/lesson12_6.c
 * Область видимость в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

int numb = 13;

int main() {
    
    printf("numb -> %d\n", numb);

    {
        int numb_i = 12;
        printf("{numb_i} -> %d\n{numb} -> %d\n", numb_i, numb);
    }
    return 0;
}
