/*
 * File: 4-isalpha.c
 * Author: Kelemu l.
 */

#include "main.h"

/**
 * _isalpha - che if a char is alpha or not.
 * @c: The character to be checked.
 *
 * Return: 1 if c is char or 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
