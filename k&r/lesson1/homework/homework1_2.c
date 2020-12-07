/* k&r/lesson1/homework/homework1_2.c
   Упражнение 1.2. Выясните что произойдет, если в строковую константу аргумента
   printf() вставить \c, где c - символ, не входящий в представленный выше список.
*/
#include <stdio.h>

int main() {
    printf("hello, world!\n"); // если мы напишем \c, компилятор выдает
                               // исключение (warning: unknown escape sequence :
                               // '\c'.)
    return 0;
}
