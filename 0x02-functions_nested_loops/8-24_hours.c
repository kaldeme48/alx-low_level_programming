#include "main.h"
/**
* jack_bauer - prints every minute of day in 24 hour clock
* h = hour, m = minutes
* / 10 allows second digit to change and rotate
* for loop breaks before going past 24:00
* Return: 24 hour clock line by line
*/
void jack_bauer(void)
{
int h, m;

for (h = 0; h < 60; h++)[D[D[D[D[D24[C[C[C[C 24; h++)
{
for (m = 0; m < 60; m++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
