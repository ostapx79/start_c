/* 
 * start_c/c_begin/lesson8/lesson8_2.c 
 * Цикл с постусловием.
 */
#include <stdio.h>

int main() {
    int numb = -10;
    do {
        printf("%3d\n", numb);
        numb++;
    } while (numb <= 10);

    return 0;
}
