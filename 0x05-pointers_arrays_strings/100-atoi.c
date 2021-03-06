#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: char type string
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, i, j;

	for (i = 0; !(s[i] >= 48 && s[i] <= 57); i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	for (j = i; s[j] >= 48 && s[j] <= 57; j++)
	{
		res *= 10;
		res += (s[j] - 48);
	}

	return (sign * res);
}
