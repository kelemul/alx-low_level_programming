/*
 * File: 4-strpbrk.c
 * Auth: kelemu l
 */

#include "main.h"

/**
 * _strpbrk - Searches for a strings.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: A pointer a string otherwise - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
