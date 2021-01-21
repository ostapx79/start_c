/*
 * start_c/c_begin/lesson9/lesson9_1.c
 * Много мерные массивы.
 */
#include <stdio.h>

int main() {
    int arr[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
        printf("arr[%d]\n", arr[i]);
    }
    return 0;
}
