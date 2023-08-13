#include <stdio.h>

/**
 * main - Entry point of a program
 *
 * Return: 0 always
 */

int main(void)
{
	int i;
	int j;

	for (i = 0 ; i <= 99 ; i++)
	{
		for (j = i ; j <= 99 ; j++)
			{
				printf("%02d %02d", i , j);
				if (j < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
	}
	putchar('\n');
	return (0);
}
