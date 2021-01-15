// start_c/c_begin/lesson7/lesson7_2.c
#include <stdio.h>
#include <stdlib.h>

int main () {
    char ch = 'w';
    printf("ch - %c\n", ch);

    ch = getchar();
    printf("ch - %c\n", ch);
    return 0;
}
