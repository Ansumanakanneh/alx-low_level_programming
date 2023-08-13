#include <stdio.h>

/**
 * main - serves as the starting point for the execution of a program
 *
 * Return: 0 always
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
