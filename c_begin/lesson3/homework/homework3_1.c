/* Изменить программу так, чтобы если условия если условия t > 10, не
 * выполняется т.е. ложное. Но программа кроме вывода ggg завершилась с
 * результатом 7.
 * start_c/c_begin/lesson3/homework/homework3_1.c
 */
#include <stdio.h>

int main() {
    int t;
    t = 5;

    if (t > 10) {
        printf("www\n");
        if(t > 20) {
            printf("123\n");
        }
    } else {
        printf("ggg\n");
    }
    return 0;
}
