/*
 * File: is Upper
 * Author: kelemu leykun
 */

#include "main.h"
#include <stdio.h>

/**
 * _isupper - it will check if the letter is upper or not
 * @c: is what we check
 *
 * Return: 1 for upper case 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	
	else
		return (0);
}
