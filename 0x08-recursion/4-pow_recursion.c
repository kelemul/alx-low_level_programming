#include "main.h"

/**
 * _pow_recursion - prints thhe power of x recursively
 * 
 * Return: the power of @x by @y
 */
int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	power *= _pow_recursion(x, y - 1);

	return (power);
}
