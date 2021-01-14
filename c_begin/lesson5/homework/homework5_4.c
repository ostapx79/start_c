// start_c/c_begin/lesson5/homework/homework5_4.c
#include <stdio.h>

int func1(int numb_1, int numb_2) {
    if (numb_1 < numb_2) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int value;
    value = func1(40, 20);
    printf("value -> %d\n", value);
    return 0;
}
