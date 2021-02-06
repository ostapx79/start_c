/* 
 * start_c/c_begin/lesson11/lesson11_1.c
 * Макросы в Си и Си++.
 */
#include <stdio.h>
#include <stdlib.h>

#define new_integer 24
#define celoeI int // в место int можно писать celoeI
#define celoe int i = new_integer
#define prin printf("new_integer -> %d\n", new_integer)

int main() {
    int integer = 4;
    int integers = new_integer;
    celoeI integer_3 = 3;

    celoe;
    printf("celoe -> %d\n", i);
    prin;

    printf("integer -> %d\n", integer);
    printf("new_integer_1 -> %d\n", integers);

    printf("new_integer_2 -> %d\n", new_integer);
    printf("integer_3 -> %d\n", integer_3);

    return 0;
}
