#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an integer.
 * @array: array to search from
 * @size: size of array
 * @cmp: function pointers
 * Return: index of character or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]) == 1)
			return (j);
	}
	return (-1);
}