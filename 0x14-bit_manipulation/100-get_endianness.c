#include "main.h"

/**
 * get_endianness - checks if a machine is big or little
 * Return: 0(big), 1(little)
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
