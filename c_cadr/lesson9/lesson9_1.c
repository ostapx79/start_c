/* c_cadr/lesson9/lesson9_1.c */
#include <stdio.h>
/* массивы и типы данных */

int main(int argc, char** argv) {
    int statistics[127] = { 0 };
    int ch;
    int idx;
    while ((ch = getchar()) != EOF) {
	statistics[ch]++;
    }

    for (idx = 0; idx < 127; idx++) {
	printf("%d ('%c') %d\n", idx, idx, statistics);
    }
    return 0;
}
