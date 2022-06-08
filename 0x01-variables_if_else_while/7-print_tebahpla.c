/*
 * File NAme:print alpha 7
 * Author: Kelemu Leykun
 *
 */
#include <stdio.h>

/**
 * main - prints lower case english apha bets
 *
 * Return: is 0.
 *
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');

	return (0);
}
