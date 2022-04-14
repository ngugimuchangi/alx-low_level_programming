#include "main.h"

/**
 * _isupper - checks if number is uppercase
 * @c: number to check
 *
 * Return: 1 on Sucess
 * On error, 0 is returned and error is set appropriately
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
