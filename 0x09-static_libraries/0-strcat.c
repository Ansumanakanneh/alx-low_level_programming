#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
	int destnum = 0;
	int srcnum = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destnum++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srcnum++;
	for (i = 0 ; i <= srcnum ; i++)
		dest[destnum + i] = src[i];
	return (dest);
}
