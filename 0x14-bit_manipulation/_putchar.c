#include <unistd.h>

/**
 * _putchar - write a char c
 * @c: the char to be written
 *
 * Return: 1 or -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
