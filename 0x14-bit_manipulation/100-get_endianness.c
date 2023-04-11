#include "main.h"

/**
 *get_endianness - function that checks the endianness
 *
 *Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int x_int = 1;
	char *y;

	y = (char *) &x_int;

	return ((int) *y);
}
