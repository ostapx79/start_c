/*
 * start_c/c_begin/lesson4/lesson4_1.c
 */
#include <stdio.h>

int main() {
    int numb_input_x, numb_input_y;
    int numb_i;

    printf("Введите первое число x -> ");
    scanf("%d", &numb_input_x);
    printf("Введите второе число y -> ");
    scanf("%d", &numb_input_y);

    printf("Выберите число для,\nпервое число для умножение число - 1\n"
            "второе число для сложение - 2\n"
            "-> ");
    scanf("%d", &numb_i);

    if (numb_i == 1) {
        int result_input1 = numb_input_x * numb_input_y;
        printf("%d * %d = %d\n", numb_input_x, numb_input_y, result_input1);
    } else {
        if (numb_i == 2) {
            int result_input2 = numb_input_x + numb_input_y;
            printf("%d + %d = %d\n", numb_input_x, numb_input_y, result_input2);
        }
    }
    return 0;
}
