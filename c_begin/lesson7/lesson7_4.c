// start_c/c_begin/lesson7/lesson7_4.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // если мы хотим изменить в строку символ, действуем как показано ниже
    char ch[15] = "hello, world!";
    ch[6] = '\n';

    printf("ch - %s\n", ch);
    return 0;
}
