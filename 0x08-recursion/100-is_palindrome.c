#include "main.h"
/**
 *len - check string length
 * @s: string to check
 * Return: string length
 */
int len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + len(s + 1));
}

/**
 * check - checks for palindromic sequence
 * @s: character to check
 * @min: start point
 * @max: end point
 * Return: 1 if palindromic, 0 otherwise
 */
int check(char *s, int min, int max, int half)
{
	if (max == min || max == half / 2)
		return (1);
	if (*(s + min) != *(s + max))
		return (0);
	return (check(s, min + 1, max - 1, half));
}

/**
 * is_palindrome - checks if string is palindromic
 * @s: string to check
 * Return: 1 if palindromic, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (check(s, 0, len(s) - 1, len(s) -1));
}
