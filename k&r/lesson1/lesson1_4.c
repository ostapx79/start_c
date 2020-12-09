/* Именованные константы
 * k&r/lesson1/lesson1_4.c
 */

#include <stdio.h>

#define LOWER 0 /* Нижняя граница таблицы */
#define UPPER 300 /* Верхняя граница */
#define STEP 20 /* Размер шага */

/* Печатать таблицы температур по Фаренгейту и Цельсию */

int main()
{
    int fahr;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
	printf("%3d %6.1f\n", fahr, (5. / 9.) * (fahr - 32));
    }
    return 0;
}
