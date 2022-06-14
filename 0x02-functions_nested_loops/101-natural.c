/*
 * File: 101-natural.c
 * Author:kelemu L.
 */

#include <stdio.h>

/**
 * main - show numbers less than 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, res = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			res += i;
	}

	printf("%d\n", res);

	return (0);
}
