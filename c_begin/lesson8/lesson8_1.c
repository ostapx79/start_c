/* 
 * start_c/c_begin/lesson8/ lesson8_1.c
 * Операторы присваивание +=, -=, *=, /=, ++(инкремент), --(декремент).
 */
#include <stdio.h>

int main() {
    int value_a = 22;
    int value_b = 8;

    /* переменная value_a -> 31, переменная value_b -> 9 */
    //value_a += ++value_b;
    
    /* переменная value_a -> 30, переменная value_b -> 9 */
    //value_a += value_b++;

    /* выдает предупреждение лучше так не делать ответ value_a -> 41 */
    // value_a += ++value_b + ++value_b; 

    /* переменная value_a -> 39, переменная value_b -> 10 */
    // value_a += value_b++ + value_b++;

    /* переменная value_a -> 15, value_b -> 7 */
    // value_a -= --value_b;

    /* переменная value_a -> 14, value_b -> 7 */
    // value_a -= value_b--;
    
    /* переменная value_a -> 15, переменная value -> 6 */
    // value_a -= --value_b - --value_b;

    /* переменная value_a -> 21, переменная value -> 6 */
    //value_a -= value_b-- - value_b--;

    /* переменная value_a -> 30, value_b -> 9 */
    // value_a = value_a + value_b++;

    value_a = value_a + value_b++ + value_b++;

    printf("value_a -> %d\n", value_a);
    printf("value_b -> %d\n", value_b);
    return 0;
}
