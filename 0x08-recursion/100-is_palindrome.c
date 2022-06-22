#include "main.h"

int get_length(char *s);
int firts_check(char *s, int len, int i);
int is_palindrome(char *s);

/**
 * get_length - Gets the length of a string.
 * @s: The string to be measured.
 *
 * Return: The string lenght.
 */
int get_length(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_length(s + len);
	}

	return (len);
}

/**
 * firts_check - Checks if a string is a palindrome.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The i of the string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int firts_check(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (firts_check(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 *         If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = get_length(s);

	if (!(*s))
		return (1);

	return (firts_check(s, len, i));
}
