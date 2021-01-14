// start_c/c_begin/lesson6/homework/homework6_5.c
#include <stdio.h>

int main() {
    int arr[10];

    int i = 0;
    while (i < 10) {
        if (i > 0 && i < 5) {
            arr[i] = i;
        } else {
            arr[i] = i * i;
        }
        i++;
    }

    int j = 0;
    while (j < 10) {
        int res = arr[j];
        printf("arr[%d] -> %d\n", j, res);
        j++;
    }

    return 0;
}
