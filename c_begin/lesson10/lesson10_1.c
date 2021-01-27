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
    newt.c_lflag &= ~(ICANON |ECHO);
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

    do {
        sprintf(map[0], "#########################");

        for (int i = 1; i < 10; i++) 
            sprintf(map[i], "#                       #");

        sprintf(map[9], "#########################");

        map[dog_y][dog_x] = '@';
        map[apple_y][apple_x] = '*';

        system("clear");

        for (int i = 0; i < 11; i++)
            printf("%s\n", map[i]);

        // printf("%s", &key);
        key = mygetch();

        if (key == 'w') dog_y--;
        if (key == 's') dog_y++;
        if (key == 'a') dog_x--;
        if (key == 'd') dog_x++;

    } while (key != 'e');
    return 0;
}
