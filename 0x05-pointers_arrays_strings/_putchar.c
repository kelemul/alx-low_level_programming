#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints c
 * @c: The character to print
 *
 * Return:  1. on success 0 on err
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
