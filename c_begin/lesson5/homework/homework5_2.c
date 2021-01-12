/* start_c/c_begin/lesson5/homework/homework5_2.c
 * Напишите функцию, которая имеет два параметра a и b типа int и возвращает
 * результат типа int. При помощи процедуры вывести результат функции на экран.
 */
#include <stdio.h>

int two_parametres(int numb_1, int numb_2) {
    int result = numb_1 % numb_2;
    return result;
}

void res_func(int numb_3, int numb_4) {
    int res = two_parametres(numb_3, numb_4);
    printf("res -> %d\n", res);
}

int main() {
    int numb_5, numb_6;
    printf("Введите первое число -> ");
    scanf("%d", &numb_5);
    printf("Введите второе число -> ");
    scanf("%d", &numb_6);
    res_func(numb_5, numb_6);
    return 0;
}
