/*
 * start_c/c_begin/lesson11/homework/homework11_1.c
 * Создайте константу то есть макрос равно десяти и отобразите на экран помощи
 * printf();.
 */
#include <stdio.h>
#include <stdlib.h>

#define integer 10

int main() {
    int i = integer;

    printf("i -> %d\n", i);
    return 0;
}
