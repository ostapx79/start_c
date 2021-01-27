/* 
 * start_c/c_begin/lesson10/lesson10_1.c
 * Пишем первую простую игру, про голодную собаку.
 */
#include <stdio.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

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
    char map[11][26];
    int dog_x = 12;
    int dog_y = 5;
    int apple_x = 3;
    int apple_y = 3;
    char key;
    int wall_x, wall_y;

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

        wall_y = dog_y;
        wall_x = dog_x;

        if (key == 'k') dog_y--; // вверх
        if (key == 'j') dog_y++; // вниз
        if (key == 'h') dog_x--; // вправо
        if (key == 'l') dog_x++; // влево

        if (map[dog_y][dog_x] == '#') {
            dog_y = wall_y;
            dog_x = wall_x;
        }

    } while (key != 'e');
    return 0;
}
