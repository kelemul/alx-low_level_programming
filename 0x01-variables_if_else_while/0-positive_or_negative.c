/*
 * File name:0-positive-ornegetive.c
 * Author:kelemu leykun
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -will generate a random number and
 * it will determine if it is negativ, positive or zero
 *
 * Return: will always 00.
 */
int main(void)
{
	int x;
	srand(time(0));
	x=rand() - RAND_MAX / 2;

	if (x > 0)
		printf("%d is positive\n", x);
	else if ( x < 0)
		printf("%d is negative\n", x);
	else
		printf("%d is zero\n", x);

	return (0);
}
