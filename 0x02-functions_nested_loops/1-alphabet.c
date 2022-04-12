#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * print_alphabet - write alphabets to stdout
 * @a: The character to print
 * Return: On success 0
 */
int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	}
	_putchar("\n");

	return (0);
}
