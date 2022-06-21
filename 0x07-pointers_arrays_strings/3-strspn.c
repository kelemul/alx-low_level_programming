/*
 * File: 4-strpbrk.c
 * Auth: kelemu L.
 */

#include "main.h"

/**
 * _strpbrk - Searches a string
 * @s: The string to be searched.
 * @accept: The string to searched
 *
 * Return: A string atherwise - NULL.
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
