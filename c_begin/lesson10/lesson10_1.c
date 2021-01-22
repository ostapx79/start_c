/* 
 * start_c/c_begin/lesson10/lesson10_1.c
 * Пишем первую простую игру, про голодную собаку.
 */
#include <stdio.h>
#include <stdlib.h>

int main() {
    char map[11][26];
    int dog_x = 12;
    int dog_y = 5;
    int apple_x = 3;
    int apple_y = 3;

    sprintf(map[0], "#########################");

    for (int i = 1; i < 10; i++) 
        sprintf(map[i], "#                       #");

    sprintf(map[9], "#########################");

    map[dog_y][dog_x] = '@';
    map[apple_y][apple_x] = '*';

    for (int i = 0; i < 11; i++)
        printf("%s\n", map[i]);
    return 0;
}
