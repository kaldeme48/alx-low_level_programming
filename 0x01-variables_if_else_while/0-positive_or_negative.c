#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main()
{
int n;

printf("Enter a number n: ");
scanf("%d", &n);

if (n > 0)
{
printf("%d is positive\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
