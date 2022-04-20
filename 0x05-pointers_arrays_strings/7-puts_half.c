#include "main.h"
/**
 * puts_half - prints second half of characters in a string
 * @str: string constant variable
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, s;
	char *ptr = str;

	/* find length of string */
	s = 0;
	for (i = 0; *ptr; i++, *ptr++)
	{
		s += 1;
	}
	s += 1;

	/*check if stringsize is odd or even */
	if (s % 2 == 0)
	{
		j = s / 2;
		while (j <= s)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
	else
	{
		j = (s - 1) / 2;
		while (j <= s)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
