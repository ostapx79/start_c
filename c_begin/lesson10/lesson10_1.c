/* 
 * start_c/c_begin/lesson10/lesson10_1.c
 * Пишем первую простую игру, про голодную собаку.
 */
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>
#include <time.h>

int mygetch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

int main() {

    srand(time(NULL));

    char map[11][26];
    int dog_x = 12;
    int dog_y = 5;
    int apple_x = 3;
    int apple_y = 3;
    char key;
    int wall_d_x, wall_d_y, wall_a_x, wall_a_y;
    int count = 0;

    do {
        sprintf(map[0], "#########################");

        for (int i = 1; i < 10; i++) 
            sprintf(map[i], "#                       #");

        sprintf(map[9], "#########################");

        map[apple_y][apple_x] = '*';
        map[dog_y][dog_x] = '@';

        system("clear");

        for (int i = 0; i < 11; i++)
            printf("%s\n", map[i]);

        key = mygetch();

        wall_d_y = dog_y;
        wall_d_x = dog_x;

        if (key == 'k') dog_y--; // вверх
        if (key == 'j') dog_y++; // вниз
        if (key == 'h') dog_x--; // вправо
        if (key == 'l') dog_x++; // влево

        if (map[dog_y][dog_x] == '#') {
            dog_y = wall_d_y;
            dog_x = wall_d_x;
        }

        wall_a_y = apple_y;
        wall_a_x = apple_x;

        if ((dog_y == apple_y) && (dog_x == apple_x)) {
            apple_y = rand() * 1. / RAND_MAX * 9 + 1;
            apple_x = rand() * 1. / RAND_MAX * 22 + 1;
            if (map[apple_y][apple_x] == '#') {
                apple_y = wall_a_y;
                apple_x = wall_a_x;
            }
            count++;
        }

    } while (key != 'e');

    printf("Сколько яблок с ел собака -> %d\n", count);

    return 0;
}
