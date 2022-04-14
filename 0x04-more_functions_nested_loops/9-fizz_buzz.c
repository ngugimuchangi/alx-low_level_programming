#include <stdio.h>
/**
 * main - prints 1 to 100, prints fizz for multiples of three,
 * and prints FizzBuzz for multiple of three and five
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 15 != 0))
		{
			printf("Fizz ");
		}
		else if ((i % 5 == 0) && (i % 15 != 0))
		{
			printf("Buzz ");
		}
		else if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}

	return (0);
}
