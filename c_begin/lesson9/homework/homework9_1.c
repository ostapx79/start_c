/* 
 * start_c/c_begin/lesson9/homework/homework9_1.c
 * Измените программу так, чтобы она содержала таблицу умножения для чисел от 1
 * до 10.
 */
#include <stdio.h>

int main() {
    int multi_table[10][10];
    int i, k;
    for (i = 0; i < 10; i++) {
        for (k = 0; k < 10; k++) {
            multi_table[i][k] = (k + 1) * (i + 1);
            printf("%2d ", multi_table[i][k]);
        }
        printf("\n");
    }
    return 0;
}
