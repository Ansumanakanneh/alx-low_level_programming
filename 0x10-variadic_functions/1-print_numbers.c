#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: string to be printed between numbers
 * @n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list num;

	va_start(num, n);
	for (a = 0; a < n; a++)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(num, int));
			if (a != n - 1)
				printf("%s", separator);
		}
		else
			printf("%d", va_arg(num, int));
	}
	putchar('\n');
	va_end(num);
}
