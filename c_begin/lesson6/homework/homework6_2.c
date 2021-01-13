/* start_c/c_begin/lesson6/homework/homework6_2.c
 * Изменить код цикла из задание 1 так чтобы после пятого элемента, значение
 * имели равное их номеру, в массиве в квадрате. То есть элемент массива с
 * номером 5 получил значение 25, а элемент с номером 9 получил значение 81.
 */
#include <stdio.h>

int main() {
    int arr[10];
    int n_i = 0;
    while (n_i < 10) {
        if (n_i > 4 && n_i < 10) {
            printf("arr[%d] -> %d\n", n_i, arr[n_i] = n_i * n_i);
        } else {
            printf("arr[%d] -> %d\n", n_i, arr[n_i] = n_i);
        }
        n_i++;
    }
    return 0;
}
