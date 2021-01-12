/* start_c/c_begin/lesson5/homework/homework5_1.c
 * Напишите процедуру, которая имеет параметр x типа int, и если x меньше 10 то
 * выводит на экран, иначе печатает слово error. После чего вызовите эту
 * процедуру в программе 2 раза со значениями 5 и 10.
 */
#include <stdio.h>

void procedure(int numb) {
    if (numb < 10) {
        printf("numb -> %d\n", numb);
    } else {
        printf("Error: больше чем!\n");
    }
}

int main() {
    int numb_i = 5;
    procedure(numb_i);
    return 0;
}
