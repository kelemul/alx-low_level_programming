#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: The character to print
 *
 * Return: 1 if success or 0.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
