/*
 * File: 6-abs.c
 * Author: KELEMU L.
 *
 */

#include "main.h"

/**
 * _abs - do absulute value.
 * @n: The integer to be computed.
 *
 * Return: The absolute value.
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
