#include "main.h"
/**
 * _atoi - converts character numbers to integers
 * @s: string to check
 * Return: void
 */
int _atoi(char *s)
{
	int i, sign, res;

	res = 0;
	sign = 1;
	for (i = 0; *s; i++)
	{
	if (s[i] == '-')
	{
		sign *= -1;
	}
	else if (s[i] == '+')
	{
		sign *= 1;
	}
	if ((s[i] >= '0') && (s[i] <= '9'))
	{
		if ((s[i + 1] >= '0') && (s[i + 1] <= '9'))
		{
			res = (res * 10) + (s[i] - '0');
		}
		else
		{
			res = (res * 10) + (s[i] - '0');
			break;
		}
	}
	}

	return (sign * res);

}
