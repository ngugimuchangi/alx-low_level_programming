#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
	int m = 0;
	int h = 0;

	while (h < 24)
	{
	while (m < 60)
	{
	_putchar(h / 10 + '0');
	_putchar(h % 10 + '0');
	_putchar(':');
	_putchar(m / 10 + '0');
	_putchar(m / 10 + '0');
	_putchar('\n');
	m++;
	}
	h++;
	}
}
