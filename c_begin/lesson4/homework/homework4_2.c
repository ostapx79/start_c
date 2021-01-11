/*
 * start_c/c_begin/lesson4/homework4_2.c
 * Изменить программу так, чтобы в ней можно было не только, складывать и
 * умножать, но и вычитать и делить.
 */
#include <stdio.h>

int main() {
    int numb_x, numb_y;
    int transaction_numb;
    printf("Калькулятор!\n");
    printf("Введите первое натуральное число -> ");
    scanf("%d", &numb_x);
    printf("Введите второе натуральное число -> ");
    scanf("%d", &numb_y);
    printf("Выберите операцию\n"
            "умножение: - 1\n"
            "деление: - 2\n"
            "сложение: - 3\n"
            "вычитание: - 4\n"
            "остаток от деление: - 5\n"
            "--> ");
    scanf("%d", &transaction_numb);

    if (transaction_numb == 1) {
        int result = numb_x * numb_y;
        printf("%d * %d = %d\n", numb_x, numb_y, result);
    } else if (transaction_numb == 2) {
        int result = numb_x / numb_y;
        printf("%d / %d = %d\n", numb_x, numb_y, result);
    } else if (transaction_numb == 3) {
        int result = numb_x + numb_y;
        printf("%d + %d = %d\n", numb_x, numb_y, result);
    } else if (transaction_numb == 4) {
        int result = numb_x - numb_y;
        printf("%d - %d = %d\n", numb_x, numb_y, result);
    } else {
        int result = numb_x % numb_y;
        char chars = '%';
        printf("%d %c %d = %d\n", numb_x, chars, numb_y, result);
    }
    return 0;
}
