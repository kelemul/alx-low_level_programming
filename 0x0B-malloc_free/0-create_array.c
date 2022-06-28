#include "main.h"
#include <stdlib.h>

/**
 * create_array - generate an array of characters
 * @s: The s of array
 * @c:  asingle char
 *
 * Return: NULL or the array
 */
char *create_array(unsigned int s, char c)
{
	char *array;
	unsigned int i;

	if (s == 0)
		return (NULL);

	array = malloc(sizeof(char) * s);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < s; i++)
		array[i] = c;

	return (array);
}
