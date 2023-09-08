#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat -  concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to concatenates from s2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int s1num = 0;
	unsigned int s2num = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		s1num++;
	for (i = 0; s2[i] != '\0'; i++)
		s2num++;
	
	output = malloc(sizeof(char) * (s1num + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= s2num)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
			output[s1num + i] = s2[i];
		output[s1num + i] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[s1num + i] = s2[i];
		output[s1num + i] = '\0';
	}
	return (output);
}
