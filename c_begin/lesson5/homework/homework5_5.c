// start_c/c_begin/lesson5/homework/homework5_5.c
#include <stdio.h>

void proc(int numb) {
    if (numb < 10) {
        printf("numb: меньше чем 10 -> %d\n", numb);
    } else {
        printf("error: больше чем 10 -> %d\n", numb);
    }
}

int funct(int numb_1, int numb_2) {
    if (numb_1 < numb_2) {
        return numb_1;
    } else {
        return numb_2;
    }
}

int main() {
    int res;
    res = funct(2, 32);
    printf("результат должен быть меньше чем 10\n");
    printf("res: функции -> %d\n", res);
    proc(res);
    return 0;
}
