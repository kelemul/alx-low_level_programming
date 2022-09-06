/*
 * File: 0-strcat.c
 * Auth: Kelemu L.
 */

#include "main.h"

/**
 * strcat - Concatenates two stringss
 * @dest: main string.
 * @src: The other string
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
