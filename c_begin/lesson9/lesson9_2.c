/*
 * start_c/c_begin/lesson9/lesson9_2.c
 * Матрицы в Си и как сними работать.
 */
#include <stdio.h>

int main() {
    int arr[10][10];
    arr[3][5] = 9;

    int i, k;
    for (k = 0; k < 10; k++) {
        for (i = 0; i < 10; i++) {
            arr[k][i] = i + 1;
            printf("%d ", arr[k][i]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
