#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int d, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (d = 1; d <= n; d++)
		{
			for (m = 1; m < d; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
