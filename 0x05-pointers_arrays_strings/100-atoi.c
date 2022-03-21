#include "main.h"

/**
 * _atoi - convert a string to an integer
 * Return: integer converted
 */

int _atoi(char *s)
{
	int sign = 1, res = 0, i;

	for (i = 0; !(s[i] >= 48 && s[i] <= 57); i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
	}

	for (int j = i; s[j] >= 48 && s[j] <= 57; j++)
	{
		res *= 10;
		res += (s[j] - 48);
	}

	return (sign * res);
}
