/*
 * File: 5-string_toupper.c
 * Auth: Kelemu l.
 */

#include "main.h"

/**
 * string_toupper - Changes to uppercase.
 * @str: The lower case letter.
 *
 * Return: The changed string.
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}

	return (str);
}
