#include <stdio.h>
#include "variadic_functions.h"
/**
 * p_char - prints a character
 * @c_args: va_list to check for char specfier
 * Return: nothing
 */
void p_char(va_list c_args)
{
	printf("%c", va_arg(c_args, int));
}
/**
 * p_int - prints an integer
 * @i_args: va_list to check for integer specifier
 * Return: nothing
 */
void p_int(va_list i_args)
{
	printf("%i", va_arg(i_args, int));
}
/**
 * p_float - prints a float
 * @f_args: va_list to check for float specifier
 * Return: nothing
 */
void p_float(va_list f_args)
{
	printf("%f", va_arg(f_args, double));
}
/**
 * p_string - prints a string
 * @s_args: va_list to check for string specifier
 * Return: nothing
 */
void p_string(va_list s_args)
{
	char *s;

	s = va_arg(s_args, char *);
	if (!s)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - prints characters based on format specifier
 * @format: format string
 * Decription: function that prints chracters based on specified
 * format, i.e. c for char, i for integer, f for float and s
 * for char. It ignores other characters in format string
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	p_func func[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};
	int i, j;
	char *delimiter = "";
	va_list args;

	va_start(args, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (func[j].sp != NULL)
		{
			if (*(func[j].sp) == format[i])
			{
				printf("%s", delimiter);
				func[j].f(args);
				delimiter = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
