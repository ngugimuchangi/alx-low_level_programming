#include "main.h"
/**
 * _sqrt - finds squareroot of a number
 * @x: starting point
 * @y: number
 * Return: square root on success, -1 otherwise
 */
int _sqrt(int x, int y)
{
	if (x > y)
		return (-1);
	if (y < 0)
		return (-1);
	if ((x * x) == y)
		return (x);
	return (_sqrt(x + 1, y));
}

/**
 * _sqrt_recursion - finds the squareroot through recursion
 * @n: number to find squareroot
 * Return: squareroot on success, -1 otherwise
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
