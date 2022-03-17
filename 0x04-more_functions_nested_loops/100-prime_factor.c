#include <stdio.h>

/**
 * main -  calculates largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int x = 612852475143;
	long int pr;

	for (pr = 2; pr < x; pr++)
	{
		if (x % pr == 0)
		{
			x = x / pr;
		}
	}
	printf("%ld\n", pr);
	return (0);
}
