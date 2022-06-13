/*
 * File: 6-puts2.c
 * Auth: KELEMU L.
 */

#include "main.h"

/**
 * puts2 - prints a string.
 * @str:  characters.
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		_putchar(str[index]);

	_putchar('\n');
}
