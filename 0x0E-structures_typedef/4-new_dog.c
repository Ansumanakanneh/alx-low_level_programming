#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - finds the length of string
 * @s: string to find length
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 * Return: copied string
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);
	for (i = 0; i < len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: ownerof dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *medog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	medog = malloc(sizeof(dog_t));
	if (medog == NULL)
		return (NULL);
	medog->name = malloc(sizeof(char) * (len1 + 1));
	if (medog->name == NULL)
	{
		free(medog);
		return (NULL);
	}
	medog->owner = malloc(sizeof(char) * (len2 + 1));
	if (medog->owner == NULL)
	{
		free(medog->name);
		free(medog);
		return (NULL);
	}
	_strcpy(medog->name, name);
	_strcpy(medog->owner, owner);
	medog->age = age;
	return (medog);
}
