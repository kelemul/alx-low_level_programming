#include "main.h"
#include <unistd.h>

/**
 * _putchar - write a character
 * @c: is the char
 *
 * Return: 1 if true or 0 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
