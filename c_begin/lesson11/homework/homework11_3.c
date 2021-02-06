/*
 * start_c/c_begin/lesson11/homework/homework11_3.c
 * Создайте переменную целого типа, и заполните ее псевдослучайным числом в
 * диапазоне от 10 до 29 включительно.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int int_rand = 10 + rand() % (30 - 10);
    printf("int_rand -> %d\n", int_rand);

    return 0;
}
