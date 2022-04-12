#include "main.h"
/**
 * _isalpha - check if lower case
 * @c: character to check
 * Return: 1 equal success, 0 equals failure
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
