#include <stdio.h>
#include <math.h>

/**
 * main - finds prime numbers of 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n = 612852475143, i = 2;

	while (i * i < n)
	{
		while (n % i == 0)
			n = n / i;
		i = i + 1;
	}
	printf("%ld\n", n);

	return (0);
}
