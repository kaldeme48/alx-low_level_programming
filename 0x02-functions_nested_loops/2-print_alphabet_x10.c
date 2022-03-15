#include "main.h"
/**
* print_alphabet_x10 - prints 10 times of the alphabet
*
* Return: x10 a-z
*/
void print_alphabet_x10(void)
{
int n, c;

c = 0;

while (c < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
c++;
_putchar('\n');
}
}
