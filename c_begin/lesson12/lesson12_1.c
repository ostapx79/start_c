/*
 * start_c/c_begin/lesson12/lesson12_1.c
 * Структура в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

struct isPoint {
    int numb_x;
    int numb_y;
} numb_p;

int main() {
    numb_p.numb_x = 7;
    printf("struct -> %d\n", numb_p.numb_x);
    return 0;
}
