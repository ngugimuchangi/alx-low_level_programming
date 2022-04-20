#include "main.h"
/**
 * _puts - prints characters in a character string using pointer
 * @str: string constant
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
