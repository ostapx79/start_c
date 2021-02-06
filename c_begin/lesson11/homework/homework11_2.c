/*
 * start_c/c_begin/lesson11/homework/homework11_2.c
 * Создайте массив целого типа, указав в качестве длину массива нашу константу,
 * после чего при помощи любого цикла, используя константу заполните весь массив
 * значениями от 1 до 10 включительно. Отобразите весь массив на экран любым
 * способом.
 */
#include <stdio.h>
#include <stdlib.h>

#define len_arr 11

int main() {
    int array[len_arr];

    int i = 1;
    while (i <= len_arr) {

        if (i < len_arr) {
            array[i] = i;
        }

        if (i == len_arr) {
            array[i] = '\0';
        }

        printf("array[%d] -> %d\n", i, array[i]);
        
        i++;
    }
    return 0;
}
