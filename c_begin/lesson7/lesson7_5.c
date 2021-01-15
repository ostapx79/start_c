// start_c/c_begin/lesson7/lesson7_5.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    char s[10] = "sdsdsdsdsd";
    printf("%s\n", s);

    sprintf(s, "ababababa");
    printf("%s\n", s);
    // Если символьный массив состоит из 10 мест, можем писать только 9,
    // последний находится символ конца строки.
    return 0;
}
