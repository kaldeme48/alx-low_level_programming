#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}

/**
 * squareroot - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: squareroot
 */
int squareroot(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (squareroot(n, i + 1));
}
