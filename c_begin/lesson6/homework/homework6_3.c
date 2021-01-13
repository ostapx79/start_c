// start_c/c_begin/lesson6/homework/homework6_3.c
#include <stdio.h>

int main() {
    int arr[10];
    int i = 0;
    while (i < 10) {
        if (i > 4 && i < 10) {
            arr[i] = i * i;
        } else {
            arr[i] = i;
        }
        i++;
    }

    int j = 0;
    while (j < 10) {
        printf("arr[%d] -> %d\n", j, arr[j]);
        j++;
    }
    return 0;
}
