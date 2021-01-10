/* Изменить программу так, чтобы если t > 30, то программа кроме www123
 * напечатала еще какие-нибудь 3 символа и значение переменной t.
 * start_c/c_begin/lesson3/homework/homework3_2.c
 */
#include <stdio.h>

int main() {
    int t = 35;

    if (t > 10) {
        printf("www\n");
        if (t > 20) {
            printf("123\n");
            if (t > 30) {
                printf("ddd\nt-%d\n", t);
            }
        }
    } else {
        printf("ggg\n");
    }
    return 0;
}
