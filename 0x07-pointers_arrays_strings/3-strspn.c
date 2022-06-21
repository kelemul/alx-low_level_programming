/*
 * File: 3-strspn.c
 * Auth: Kelemu L.
 */

#include "main.h"

/**
 * _strspn - Gets substring lengh.
 * @s: The string to be searched.
 * @accept: The sub string.
 *
 * Return: The length of the substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
