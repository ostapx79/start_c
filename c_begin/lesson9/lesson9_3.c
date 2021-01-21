/*
 * start_c/c_begin/lesson9/lesson9_3.c
 * Матрицы из трех элементов массива.
 */
#include <stdio.h>

int main() {
    int arr[10][10][10];
    int i, k, h;
    for (i = 0; i < 10; ++i) {
        for (k = 0; k < 10; ++k) {
            for (h = 0; h < 10; ++h) {
                arr[i][k][h] = h + 1;
                printf("%d", arr[i][k][h]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
