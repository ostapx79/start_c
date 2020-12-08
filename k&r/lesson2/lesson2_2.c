/* k&r/lesson2/lesson2_2.c */
#include <stdio.h>

/* печать таблицы температур по Фаренгейту и Цельсию для
   fahr = 0, 20, ...., 300; вариант с плавающей точкой */

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* нижняя граница таблицы температур */
    upper = 300; /* верхняя граница */
    step = 20; /* шаг */

    fahr = lower;

    while (fahr <= upper) {
	celsius = (5./9.) * (fahr-32.);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr += step;
    }
    return 0;
}
