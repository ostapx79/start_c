// start_c/c_begin/lesson7/lesson7_8.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char s[10] = "Вован";
    printf("%s\n", s);

    scanf("%s", s);
    printf("%s\n", s);

    // В UNIX подобных систем нет ни каких проблем с вводом буквы а, как в
    // windows надо подключить модуль <windows.h> перед <winuser.h>, тут даже
    // модуль <locale.h> не надо подключить для ввода вывода русских символов.
    return 0;
}

