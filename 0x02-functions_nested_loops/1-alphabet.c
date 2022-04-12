#include "main.h"
/**
 * print_alphabet - write alphabets to stdout
 *
 * Return: On success 0
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	_putchar(a);
	_putchar("\n");

	return (0);
}
