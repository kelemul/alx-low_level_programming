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
int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}
