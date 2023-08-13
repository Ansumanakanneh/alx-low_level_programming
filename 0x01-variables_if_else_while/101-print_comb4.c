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
	int k;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = i + 1 ; j <= 9 ; j++)
		{
			for (k = j + 1 ; k <= 9 ; k++)
			{
				printf("%d%d%d", i, j, k);
				if (i < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}	
		}
	}
	putchar('\n');
	return (0);
}
