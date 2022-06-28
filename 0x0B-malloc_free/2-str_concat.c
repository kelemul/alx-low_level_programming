#include "main.h"
#include <stdlib.h>

/**
 * str_concat - merges two strings
 * @str1: main string
 * @str2: the string to be merged
 *
 * Return: NULL or the two string
 */
char *str_concat(char *str1, char *str2)
{
	char *merged;
	int i, index = 0, s = 0;

	if (str1 == NULL)
		str1 = "";

	if (str2 == NULL)
		str2 = "";

	for (i = 0; str1[i] || str2[i]; i++)
		s++;

	merged = malloc(sizeof(char) * s);

	if (merged == NULL)
		return (NULL);

	for (i = 0; str1[i]; i++)
		merged[index++] = str1[i];

	for (i = 0; str2[i]; i++)
		merged[index++] = str2[i];

	return (merged);
}
