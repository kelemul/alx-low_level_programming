#include "main.h"
#include <stdlib.h>


int get_len(char *str);
int counter(char *str);
char **strtow(char *str);

/**
 * get_len - gets the index
 * @str: the string
 * Return: the index
 */
int get_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}

	return (len);
}

/**
 * counter - counts words
 * @str: the string
 *
 * Return: the words
 */
int counter(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;

	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += get_len(str + index);
		}
	}

	return (words);
}

/**
 * strtow - string splitter
 * @str: the string being splitted
 *
 * Return: NULL or the words
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, words, w, chars, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = counter(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[index] == ' ')
			index++;

		chars = get_len(str + index);

		strings[w] = malloc(sizeof(char) * (chars + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < chars; l++)
			strings[w][l] = str[index++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
