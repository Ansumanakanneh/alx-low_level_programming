#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: 1 integer
 * @b: 2 integer
 */

void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}
