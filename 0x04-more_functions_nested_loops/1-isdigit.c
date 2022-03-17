#include "main.h"
#include <stdio.h>

/**
 * _isdigit - Checks if c is a digit.
 * @c: represents an ascii character
 * Return: Return 1 if it is a digit else return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
