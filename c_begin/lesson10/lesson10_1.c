/* 
 * start_c/c_begin/lesson10/lesson10_1.c
 * Пишем первую простую игру, про голодную собаку.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char map[11][26];
    // int i;

    sprintf(map[0], "#########################");

    for (int i = 1; i < 10; i++) 
        sprintf(map[i], "#                       #");

    sprintf(map[9], "#########################");

    for (int i = 0; i < 11; i++)
        printf("%s\n", map[i]);
    return 0;
}
