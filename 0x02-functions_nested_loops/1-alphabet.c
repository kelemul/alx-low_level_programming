/*
 * File: 1-alphabet.c
 * Author: Kelemu L.
 */

#include "main.h"

/**
 * print_alphabet - prints a-z.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
