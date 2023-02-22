#include "main.h"
/**
 * print_alphabet - entry point
 *
 * Description: prints the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
    char i;
    for(i = 1; i <=10; i++){
    for (i = 'a'; i <= 'z'; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
    }
}
