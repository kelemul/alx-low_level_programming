/*
 * File: 1-strncat.c
 * Auth: kelemu L.
 */

#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The second car
 * @src: The first char
 * @n: The number of bytes 
 * Return: the concated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
