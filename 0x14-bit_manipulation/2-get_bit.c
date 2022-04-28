#include "main.h"

/**
 * get_bit - Entry point
 * @n: decimal parameter
 * @index: index
 * Return: val
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 32)
	return (-1);
	return (bit & 1);
}
