// start_c/c_begin/lesson8/homework/homework8_1a.c
#include <stdio.h>

int main() {
    int numb;
    int numb_t = 19;

    for (numb = 0; numb < numb_t; numb += 2) {
        printf("numb -> %d\n", numb);
    }
    return 0;
}
