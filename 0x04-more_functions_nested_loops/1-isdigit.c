#include "main.h"

/**
 * _isdigit - checks if input is number 0-9
 * @c: input to check
 *
 * Return: 1 on Success
 * On error, 0 is returned, and errno set appropriately
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
