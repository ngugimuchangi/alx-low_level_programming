#include "main.h"
/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 1; i <= 10; i++)
	{
	for (a = 'a'; a <= 'z'; a++)
	{
	_putchar(a);
	a++;
	}
	_putchar('\n');
	}
}
