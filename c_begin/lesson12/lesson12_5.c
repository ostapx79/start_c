/*
 * start_c/c_begin/lesson12/lesson12_5.c
 * Структурные массивы.
 */
#include <stdio.h>
#include <stdlib.h>

struct IPoints {
    int numb_x;
    int numb_y;
} p;

typedef struct IPoints TPoints;

int main() {

    TPoints numb_b[3];
    TPoints numb_a[10];

    numb_b[2].numb_x = 5;
    numb_a[0].numb_y = 9;

    printf("%d\n", numb_b[2].numb_x);
    printf("%d\n", numb_a[0].numb_y);

    return 0;
}
