#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: delimiter between numbers
 * @n: number of subsequent parameters
 * Description: the function prints numbers seperated
 * by specified delimters
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator)
			if (i < n - 1)
				printf("%s", separator);
	}
	va_end(args);
	printf("\n");
}
