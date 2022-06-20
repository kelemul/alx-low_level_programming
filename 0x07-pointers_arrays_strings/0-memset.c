/*
 * File: 0-memset.c
 * Auth: KELEMU l
 */

#include "main.h"

/**
 * memset - Fill the memory with pointer
 * @s: A pointer.
 * @c: The character to be filled.
 * @n: The number of bytes to be filled.
 *
 * Return: it will return @s.
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
