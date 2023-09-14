#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: separators between strings
 *@n: number of parameters
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int a;
	va_list num;

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		char *x = va_arg(num, char *);

		if (x == NULL)
			printf("(nill)");
		else
			printf("%s", x);
		if (separator != NULL && a < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(num);
}
