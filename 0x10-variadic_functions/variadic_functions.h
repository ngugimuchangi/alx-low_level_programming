#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct p_func - contains format specifiers and pointer to function
 * @sp: format specifier string
 * @f: pointer to function
 * Description: the struct holds a format specifier and pointer to function
 * used to select the right function to execute printing to stdout
 */
typedef struct p_func
{
	char *sp;
	void (*f)(va_list);
} p_func;

#endif
