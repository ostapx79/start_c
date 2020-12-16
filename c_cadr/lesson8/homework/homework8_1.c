/*
 * c_cadr/lesson8/homework8/homework8_1.c
 * Домашнее задание:
 * 0. Доделать елочку.
 * 1. Разработка аналог утилиты wc.
 * 2. Сделать подсчет статистике по всем символам ASCII.
 */
 #include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char** argv) {
    int wc;
    int state = OUT;
    int digits_wc = 0; // цифры
    int chars_wc = 0; // символы
    int words_wc = 0; // слова
    int space_wc = 0; // пробелы
    int tabs_wc = 0; // табуляции
    int newline_wc = 0; // новые строки
    int other_wc = 0; // остальные символы
    int total_wc = 0; 

    while ((wc = getchar()) != EOF) {
	if (wc > '0' && wc < '9') {
	    ++digits_wc;
	} else if ((wc >= 'a' && wc <= 'z') || (wc >= 'A' && wc <= 'Z')) {
	    ++chars_wc;
	} else if (wc == ' ') {
	    ++space_wc;
	}else if (wc == '\t') {
	    ++tabs_wc;
	} else if (wc == '\n') {
	    ++newline_wc;
	} else {
	    ++other_wc;
	}
	if (wc == ' ' || wc == '\n' || wc == '\t') {
	    state = OUT;
	} else if (state == OUT) {
	    state = IN;
	    ++words_wc;
	}
	++total_wc;
    }
    printf("digits wc  -> %d\n", digits_wc);
    printf("chars wc   -> %d\n", chars_wc);
    printf("words wc   -> %d\n", words_wc);
    printf("space wc   -> %d\n", space_wc);
    printf("tabs wc    -> %d\n", tabs_wc);
    printf("newline wc -> %d\n", newline_wc);
    printf("other wc   -> %d\n", other_wc);
    printf("total_wc   -> %d\n", total_wc);
    return 0;
}
