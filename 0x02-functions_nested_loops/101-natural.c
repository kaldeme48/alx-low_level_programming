#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
long unsigned int i;
long unsigned int sum = 0;

for (i = 0; i <= 1024; i++)
{
if ((i % 5 == 0) || (i % 3 == 0))
{
sum = sum + 1;
}
}
printf("%ld\n", sum);
getchar();
return (0);
}
