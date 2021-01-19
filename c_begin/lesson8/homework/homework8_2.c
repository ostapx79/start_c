/* start_c/c_begin/lesson8/homework/homework8/homework8_2.c
 * Создайте строку длиной 8 символов, и при помощи любого цикла заполните его
 * символов '#'. После чего отобразите на экран в виде строки.
 */
#include <stdio.h>

int main() {
    char ch[8];

    int numb_i;
    for (numb_i = 0; numb_i < 15; numb_i++) {
        if (numb_i < 8)
            ch[numb_i] = '#';
        else 
            ch[numb_i] = '\0';
    }
    printf("%s", ch);
    printf("\n");
    return 0;
}
