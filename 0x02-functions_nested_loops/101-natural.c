#include <stdio.h>
/**
* main - entry point
*
* Return: always 0
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
printf("%d\n", sum);
getchar();
return (0);
}
