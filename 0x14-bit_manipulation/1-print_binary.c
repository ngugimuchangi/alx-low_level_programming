#include "main.h"
/**
 * print_binary - converts a number into binary and prints it.
 * @n: the number to convery
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar ('0');
}
