// start_c/c_begin/lesson5/homework/homework5_3.c
#include <stdio.h>

void proc1(int numb) {
    if (numb < 10) {
        printf("numb -> %d\n", numb);
    } else {
        printf("error!\n");
    }
}

int main() {

    proc1(5);
    proc1(15);
    return 0;

}
