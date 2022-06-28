#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns the mem space
 * @str: the expected string value
 *
 * Return: NULL or the copied string
 */
char *_strdup(char *str)
{
	char *cp;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	cp = malloc(sizeof(char) * (len + 1));

	if (cp == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		cp[i] = str[i];

	cp[len] = '\0';

	return (cp);
}
