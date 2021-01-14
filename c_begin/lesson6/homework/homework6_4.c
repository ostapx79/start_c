// start_c/c_begin/lesson6/homework/homework6_4.c
#include <stdio.h>

int main() {
    int arr[10];

    int i = 0;
    while (i < 10) {
        arr[i] = 7;
        i++;
    }

    int j = 0;
    while (j < 10) {
        printf("arr[%d] - %d\n", j, arr[j]);
        j++;
    }
    return 0;
}
