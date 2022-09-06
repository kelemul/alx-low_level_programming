/*
 * File: 3-strcmp.c
 * Auth: kelemu L.
 */

#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: First string to be compared.
 * @s2: Second string to be compared.
 *
 * Return: the difference.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
