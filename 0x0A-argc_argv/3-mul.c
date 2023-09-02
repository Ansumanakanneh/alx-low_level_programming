#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index1, index2, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		index1 = atoi(argv[1]);
		index2 = atoi(argv[2]);

		mul = index1 * index2;
		printf("%d\n", mul);
	}
	return (0);
}
