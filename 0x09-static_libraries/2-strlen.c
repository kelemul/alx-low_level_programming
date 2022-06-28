/*
 * File: 2-strlen.c
 * Auth: Kelemu L.
 */

#include "main.h"

/**
 * _strlen - return str length.
 * @str: string to be measured.
 *
 * Return: the value of @str.
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
