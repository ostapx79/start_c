/*
 * start_c/c_begin/lesson12/lesson12_4.c
 * Предопределение структуры в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

struct iPoints {
    int numb_x, numb_y;
} p;

typedef struct iPoints TPoints;

int main() {
    TPoints a;
    a.numb_y = 4;
    printf("%d\n", a.numb_y);
    return 0;
}
