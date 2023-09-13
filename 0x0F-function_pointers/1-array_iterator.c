#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - parameter on each element of an array.
 * @array: the array
 * @size: size of array
 * @action: function to perform on each of array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
		action(array[j]);
}
