/*
 * start_c/c_begin/lesson11/homework/homework11.4.c
 * Заполните массив из третий задание случайными числами от 20 до 39
 * включительно.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define numb_macr 40

int main() {
    srand(time(NULL));
    int array[numb_macr];

    for (int i = 0; i < numb_macr; i++) {
        if (i < 20) {
            array[i] = i;
            printf("array[%d] -> %d\n", i, array[i]);
        } else {
            array[i] = 20 + rand() % (40 - 20);
            printf("array[%d] -> %d\n", i, array[i]);
        }
    }

    return 0;
}
