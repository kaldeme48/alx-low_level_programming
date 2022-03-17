#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int l, m, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m <= (size - 1); m++)
		{
			for (l = 0; l < (size - 1) - m; l++)
			{
				_putchar(' ');
			}
			for (n = 0; tr <= ro; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
