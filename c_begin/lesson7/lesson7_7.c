// start_c/c_begin/lesson7/lesson7_7.c
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    char s[22] = "Привет, мир!";
    printf("%s\n", s);
    // чтобы выводила на экран символы на русском, символьный массив должен быть
    // в два раза больше чем для ASCII символов.

    scanf("%s", s);
    printf("%s\n", s);
    // В систему на UNIX не нужно подключить не какую библиотеку, а windows надо
    // подключить библиотеку <winuser.h>. Для того чтобы вводить русские
    // символы.
    return 0;
}
