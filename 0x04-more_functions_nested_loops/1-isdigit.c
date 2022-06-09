/*
 * File: is digit
 * Author: kelemu leykun
 */

#include "main.h"

/**
 * _isdigit -check a digit
 * @c: the num to checked
 *
 * Return: wil be 1 if c is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
