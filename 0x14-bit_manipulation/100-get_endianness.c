#include "main.h"
/**
 * get_endianness - checks for endianness
 * Description: endianness is how a computer stores
 * and reads multibyte data types
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int i = 1;
	char *c = (char *)&i;

	i = (*c) ? 1 : 0;
	return (i);
}
