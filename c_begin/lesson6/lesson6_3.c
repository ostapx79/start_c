/* 
 * start_c/c_begin/lesson6/lesson6_3.c
 */
#include <stdio.h>

int main() {
    int mas[10];
    mas[0] = 0;
    mas[1] = 1;
    mas[2] = 2;

    int i = 0;
    while (i < 10) {
        printf("mas[%d] -> %d\n", i, mas[i]);
        i++;
    }
    /* Если не задавать значение, то по умолчанию будет присваиваться мусор, то
     * что находится в оперативной памяти.
     */
    return 0;
}
