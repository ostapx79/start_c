/*
 * c_cadr/lesson8/homework8/homework8_1.c
 * Домашнее задание:
 * 0. Доделать елочку.
 * 1. Разработка аналог утилиты wc.
 * 2. Сделать подсчет статистике по всем символам ASCII.
 */
 #include <stdio.h>

int main(int argc, char** argv) {
    int wc;
    int digits_wc = 0; // цифры
    int chars_wc = 0; // символы
    int words_wc = 0; // слова
    int space_wc = 0; // пробелы
    int tabs_wc = 0; // табуляции
    int newline_wc = 0; // новые строки
    int total_wc = 0; 

    while ((wc = getchar()) != EOF) {
	++total_wc;
    }
    printf("total_wc -> %d\n", total_wc);
    return 0;
}
