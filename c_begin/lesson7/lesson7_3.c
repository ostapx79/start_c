/* 
 * start_c/c_begin/lesson7/lesson7_3.c
 * Массивные строки в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch[15] = "Hello, world!";
    printf("%s\n", ch);

//    Писать так не строит, компилятор выдает ошибку.
//    char ch2[15];
//    ch2[15] = "hello, world!";
//    printf("%s\n", ch2);

    return 0;
}
