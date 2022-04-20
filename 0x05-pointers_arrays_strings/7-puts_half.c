#include "main.h"
/**
 * puts_half - prints second half of characters in a string
 * @str: string constant variable
 * Return: void
 */
void puts_half(char *str)
{
	long int i, j;

	/* find length of string */
	i = 0;
	while (str[i])
	{
		i++;
	}

	/*check if stringsize is odd or even */
	if ((i % 2) == 0)
	{
		j = (i / 2);
		while ((j < i) && (*str))
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
	else
	{
		j = (i - 1) / 2;
		while (j < i && *str)
		{
			_putchar(str[j]);
			j++;
		}
		_putchar('\n');
	}
}
