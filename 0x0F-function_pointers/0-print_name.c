#include "function_pointers.h"
/**
 * print_name - function that prints a name using a pointer
 * to a function
 * @name: the name to print
 * @f: pointer to function that does the printing
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
