#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#'
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 1; m <= size; m++)
		{
			_putchar('#');
			for (n = 2; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
