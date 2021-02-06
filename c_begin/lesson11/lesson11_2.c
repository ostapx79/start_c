/*
 * start_c/c_begin/lesson11/lesson11_2.c
 * Псевдослучайные числа в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int integer;

    integer = rand();
    printf("%d\n", integer);
    
    integer = rand();
    printf("%d\n", integer);

    integer = rand();
    printf("%d\n", integer);

    return 0;
}
