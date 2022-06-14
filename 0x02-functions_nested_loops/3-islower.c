/*
 * File: 3-islower.c
 * Author: Kelemu L.
 */

#include "main.h"

/**
 * _islower - prints 1 or 0.
 * @c: The character to be checked.
 *
 * Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
