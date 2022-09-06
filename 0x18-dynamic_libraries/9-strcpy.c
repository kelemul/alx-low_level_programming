/*
 * File: 9-strcpy.c
 * Author: Kelemu Leykun.
 */

#include<string.h>
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
	strcpy(dest, src);

	return (dest);
}
