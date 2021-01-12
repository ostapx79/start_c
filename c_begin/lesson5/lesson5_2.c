/* start_c/c_begin/lesson5/lesson5_2.c
 * Функций в Си и Си++.
 */
#include <stdio.h>

int functions(int numb) {
    return numb * numb;
}

int sum_value(int numb_1, int numb_2);

int main() {
    
    int numb_i = 22;
    int result = functions(numb_i);
    printf("result -> %d\n", result);

    int numb_x = 30;
    int numb_y = 3;
    int result_x_y = sum_value(numb_x, numb_y);
    printf("result_x_y -> %d\n", result_x_y);

    return 0;
}

int sum_value(int numb_1, int numb_2) {
    return numb_1 + numb_2;
}
