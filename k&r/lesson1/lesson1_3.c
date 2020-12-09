/* 1.3 Инструкция for
 * k&r/lesson1/lesson1_3.c
 */
#include <stdio.h>

/* Печатать таблицы по Ференгейту и Цельсию */

int main() {
    int fahr;
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
	printf("%3d %6.1f\n", fahr, (5. / 9.) * (fahr - 32));
    }
    return 0;
}
