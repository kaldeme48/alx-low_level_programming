#include "main.h"

/**
 * swap_int - swaps
 * @a: pointer
 * @b: pointer
 */

void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
