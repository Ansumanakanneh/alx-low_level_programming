#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int *ptr = NULL;
	int count, i;

	if (min > max)
		return (NULL);

	count = (max - min) + 1;

	ptr = malloc(sizeof(int) * count);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < count; i++, min++)
		ptr[i] = min;

	return (ptr);
}
