#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal line
 */
void print_diagonal(int n)
{
	int m, l;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= n; m++)
		{
			for (l = 1; l < co; l++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

