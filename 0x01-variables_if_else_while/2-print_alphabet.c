/*
 * File: Alphabet
 * Author: kelemu
 */

#include <stdio.h>

/**
 * main - prints alphabets in english
 *
 * Return: always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
