#include "main.h"
#include <stdlib.h>

/**
* create_array - a function that creates and array of characters.
*
* @size: the size of the array
* @c: the character to create the array for
* Return: returns a pointer to the array,
*
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
