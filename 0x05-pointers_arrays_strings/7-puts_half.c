/*
 * File: 7-puts_half.c
 * Auth: KELEMU L.
 */

#include "main.h"

/**
 * puts_half -disp half a string.
 * @str: string being printed.
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		_putchar(str[index]);

	_putchar('\n');
}
