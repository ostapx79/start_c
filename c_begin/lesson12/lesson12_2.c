/*
 * start_c/c_begin/lesson12/lesson12_2.c
 * Структура в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

struct iPoints {
    int numb_x, numb_y;
} numb_p;

int main() {
    struct iPoints numb_a;
    numb_a.numb_y = 8;
    printf("struct_numb_a -> %d\n", numb_a.numb_y);

    numb_p.numb_x = 5;
    printf("struct_numb_p -> %d\n", numb_p.numb_x);

    int numb;
    numb = numb_a.numb_y + numb_p.numb_x;
    printf("numb -> %d\n", numb);

    return 0;
}
