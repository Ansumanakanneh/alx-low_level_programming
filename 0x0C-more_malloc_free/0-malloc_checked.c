#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: size of memory
 * Return: pointer to new memory allocated
 */

void *malloc_checked(unsigned int b)
{
	char *num;

	num = malloc(b);
	if (num == NULL)
		exit(98);
	else
		return (num);
}
