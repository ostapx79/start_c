/*
 * k&r/lesson1/lesson1_5c.c
 * Подсчет слов.
 */
#include <stdio.h>

#define IN 1 /* внутри слова */
#define OUT 0 /* вне слова */

/* подсчет строк, слов, и символов */
int main() {
    int c, new_line, new_word, new_char;
    int state;
    state = OUT;
    new_line = new_word = new_char = 0;
    while ((c = getchar()) != EOF) {
        ++new_char;
        if (c == '\n') {
            ++new_line;
        }
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
            state = IN;
            ++new_word;
        }
    }
    printf("%d %d %d\n", new_line, new_word, new_char);
}
