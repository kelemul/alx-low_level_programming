/*
 * File: 9-strcpy.c
 * Author: Kelemu Leykun.
 */

#include "main.h"

/**
 * _strcpy - Copies a string to another variable.
 * @dest: destination variable
 * @src: source string.
 *
 * Return: return the vslue of @dest.
 */
char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
