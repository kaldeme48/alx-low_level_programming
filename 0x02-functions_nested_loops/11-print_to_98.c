#include <stdio.h>
#include "main.h"
/**
* print_to_98 - prints all natural number n to 98
* prints to 98 regardless of user input
* @n: number input
[1;2j* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
