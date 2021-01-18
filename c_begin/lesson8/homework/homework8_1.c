/* start_c/c_begin/lesson8/homework/homework8_1.c
 * Измените цикл for так чтобы на экран выводилось только четные число от 2 до
 * 10.
 */
#include <stdio.h>

int main() {
    int numb = 21;
    int numb_i;
    for (numb_i = 0; numb_i < numb; numb_i++) {
        if (numb_i % 2 == 0) {
            printf("%d\n", numb_i);
        }
    }
    return 0;
}
