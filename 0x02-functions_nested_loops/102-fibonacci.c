/*
 * File: 102-fibonacci.c
 * Auth: Kelemu L.
 */

#include <stdio.h>

/**
 * main - fibonacci numbers between 0 and 50.
 *
 * Return: Always 0.
 */
int main(void)
{
	int c;
	unsigned long r1 = 0, r2 = 1, res;

	for (c = 0; c < 50; c++)
	{
		res = r1 + r2;
		printf("%lu", res);

		r1 = r2;
		r2 = res;

		if (c == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
