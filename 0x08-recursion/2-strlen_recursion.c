#include "main.h"

/**
 * _strlen_recursion - gets the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int size = 0;

	if (*s)
	{
		size++;
		size = size + _strlen_recursion(s + 1);
	}

	return (size);
}
