/*
 * File: 5-rev_string.c
 * Auth: KELEMU L.
 */

#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void print_rev(char *s)
{
	int len = 0, index = 0;
	char tmp;

	while (s[index++])
		len++;

	for (index = len - 1; index >= len / 2; index--)
	{
		_putchar(s[index]);
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = tmp;
	}

	_putchar('\n');
}
