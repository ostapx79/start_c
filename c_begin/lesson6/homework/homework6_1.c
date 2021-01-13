/* start_c/c_begin/lesson6/homework/homework6_1.c
 * При помощи отдельного цикла заполнить весь массив значением 7.
 */
#include <stdio.h>

int main () {
    int arr[10];
    int j = 7;
    int i = 0;
    while (i < 10) {
        arr[i] = j;
        printf("arr[%d] -> %d\n", i, arr[i] = j);
        i++;
    }
    return 0;
}
