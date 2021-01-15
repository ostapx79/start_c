// start_c/c_begin/lesson7/lesson7_6.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[10] = "hello, go";
    printf("%s\n", s);

    sprintf(s, "go, hello");
    printf("%s\n", s);

    scanf("%s", s);
    printf("%s\n", s);
    // Если мы хотим вводить данные и между эти данных находится пробел, 
    // символы после пробела не выводится на консоль. Пример: ввод - hello, go
    // вывод - hello, а если вводим без пробела ввод - hello,go вывод -
    // hello,go.
    return 0;
}
