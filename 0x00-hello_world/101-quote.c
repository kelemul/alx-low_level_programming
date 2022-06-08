/*
 * File: 101-quote.c
 * Author:kelemu leykun
 */

#include <unistd.h>

/**
 * the main function will print "the string in the main function",
 * followed by a new line.
 * the Return: Always 1.
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
