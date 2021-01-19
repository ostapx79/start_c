/* start_c/c_begin/lesson8/homework/homework8/homework8_3.c
 * Отобразите на экран строку из задание 2 при помощи любого цикла. Это можно
 * сделать зная количество элементов или до символа "\0".
 */
#include <stdio.h>

int main() {
    char ch[10];

    int n_i;
    for (n_i = 0; n_i < 10; n_i++) {
        ch[n_i] = '#';
    }

    printf("%s", ch);
    printf("\n");
    
    int n_j;
    for (n_j = 0; n_j < 10; n_j++) {
        printf("%c", ch[n_j]);
    }
    printf("\n");

    char n_n;
    do {
        printf("%s", ch);
    } while (n_n != '\0');
    printf("\n");

    return 0;
}
