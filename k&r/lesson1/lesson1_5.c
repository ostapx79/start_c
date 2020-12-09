/* k&r/lesson1/lesson1_5.c */
#include <stdio.h>

/* Копирование ввода на вывод; 1-я версия. */

int main() {
    int char_c;
    char_c = getchar();
    while (char_c != EOF) {
	putchar(char_c);
	char_c = getchar();
    }
    return 0;
}
