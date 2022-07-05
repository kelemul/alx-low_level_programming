#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - get string lenght
 * @str: the string
 *
 * Return: length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - copies a string to the destination
 * @dest: a pointer to store the string
 * @src: the source string
 *
 * Return: the new string pointer
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates new dog type
 * @name: The Dog name
 * @age: the dog age
 * @owner: the Dog owner
 *
 * Return: the new dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *popy;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	popy = malloc(sizeof(dog_t));
	if (popy == NULL)
		return (NULL);

	popy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (popy->name == NULL)
	{
		free(popy);
		return (NULL);
	}

	popy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (popy->owner == NULL)
	{
		free(popy->name);
		free(popy);
		return (NULL);
	}

	popy->name = _strcopy(popy->name, name);
	popy->age = age;
	popy->owner = _strcopy(popy->owner, owner);

	return (popy);
}
