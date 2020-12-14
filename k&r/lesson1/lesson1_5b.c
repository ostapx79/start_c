* 
 * k&r/lesson1/lesson1_5b.c
 * Подсчет строк
 */
#include <stdio.h>

/* подсчет строк входного потока */

int main() {
    int c, new_line;
    new_line = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++new_line;
        }
    }
    printf("%d\n", new_line);
    return 0;
}
