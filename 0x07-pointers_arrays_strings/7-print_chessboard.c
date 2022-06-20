/*
 * File: 7-print_chessboard.c
 * Auth: kelemu L.
 */

#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The character to print the chess board.
 */
void print_chessboard(char (*a)[8])
{
	int i, i2;

	for (i = 0; a[i][7]; i++)
	{
		for (i2 = 0; i2 < 8; i2++)
			_putchar(a[i][i2]);

		_putchar('\n');
	}
}
