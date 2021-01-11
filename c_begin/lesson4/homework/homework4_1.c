/*
 * start_c/c_begin/lesson4/homework/homework4_1.c
 * Изменить программу так, чтобы она допускала вывод вещественных чисел то есть,
 * число с плавающей точкой, типа float.
 */
#include <stdio.h>

int main() {
    float numb_x, numb_y;
    int res_input;
    printf("Вводить можно не только целые числа\n");
    printf("Введите первое число -> ");
    scanf("%f", &numb_x);
    printf("Введите второе число -> ");
    scanf("%f", &numb_y);

    printf("Выберите операцию,\n"
           "сложения: наберите цифра - 1\n"
           "умножения: наберите цифра - 2\n"
           "-> ");
    scanf("%d", &res_input);

    if (res_input == 1) {
        if (numb_x == (int)numb_x && numb_y == (int)numb_y) {
            float result_2 = numb_x + numb_y;
            printf("%d + %d = %.2f\n", (int)numb_x, (int)numb_y, result_2);
        } else {
            float result_1 = numb_x + numb_y;
            printf("%.2f + %.2f = %.2f\n", numb_x, numb_y, result_1);
        }
    } else {
        if (res_input == 2) {
            if (numb_x == (int)numb_x && numb_y == (int)numb_y) {
                int result_3 = numb_x * numb_y;
                printf("%d * %d = %d\n", (int)numb_x, (int)numb_y, result_3);
            } else {
                float result_4 = numb_x * numb_y;
                printf("%.2f * %.2f = %.2f\n", numb_x, numb_y, result_4);
            }
       }
    }
    return 0;
}
