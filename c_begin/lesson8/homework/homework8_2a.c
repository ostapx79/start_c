// start_c/c_begin/lesson8/homework/homework8_2a.c
#include <stdio.h>

int main() {
    int numb_i = 0;
    int numb_t = 19;

    while (numb_i < numb_t) {
        printf("numb_i -> %d\n", numb_i);
        numb_i += 2;
    }
    return 0;
}
