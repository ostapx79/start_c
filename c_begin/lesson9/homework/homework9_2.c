/*
 * start_c/c_begin/lesson9/homework/homework9_2.c
 * Изменить программу так, чтобы пятая строка содержала цифру 5, а весь третий
 * столбец содержал цифру 3.
 */
#include <stdio.h>

int main() {
    int arr[10][10] = {{ 0 }, { 0 }};
    int i, j;
    for (i = 0; i < 10; ++i) {
        for (j = 0; j < 10; ++j) {
            //if (i == 5) {
            //    arr[5][j] = 5;
            //    printf("%d ", arr[i][j]);
            //}
            arr[5][j] = 5;
            arr[i][3] = 3;
            printf("%d ", arr[i][j]);
            //if (j == 3) {
            //    arr[i][3] = 3;
            //    printf("%d ", arr[i][j]);
            //}
        }
        printf("\n");
    }
    return 0;
}
