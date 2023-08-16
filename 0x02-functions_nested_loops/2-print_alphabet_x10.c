#include "main.h"

/**
 * main - Entry point of a program
 *
 * Return: 0 always
 */
int main(void)
{
	int i;
	char j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
	}
	_putchar('\n');
	return (0);
}
