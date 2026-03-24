#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - checks palindrome
 * @s: string
 * @i: index
 * @len: length
 * Return: 1 or 0
 */
int check_palindrome(char *s, int i, int len)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (check_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if string is palindrome
 * @s: string
 * Return: 1 if yes, 0 if no
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
