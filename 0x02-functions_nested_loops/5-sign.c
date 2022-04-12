#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number to check
 * Return: 1 + - if n is greater that zero, 0 + 0 if n is zero
 * and -1 + - if n is less than zero
 */
int print_sign(int n);
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
