/*
 * File: numberbase10
 * Author: kelemu leykun
 */
#include <stdio.h>

/**
 * main - prints all digit with base 10
 *
 * Return: is 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	putchar('\n');

	return (0);
}
