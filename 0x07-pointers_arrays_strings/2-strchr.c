/*
 * File: 2-strchr.c
 * Auth: Kelemu L.
 */

#include "main.h"

/**
 * _strchr - find the location of a string.
 * @s: The target string.
 * @c: The character to be located.
 *
 * Return: Index if @c is found otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
