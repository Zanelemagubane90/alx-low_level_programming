#include "main.h"

/**
 * get_endianness - checks whether a machine is big endian or little endian
 *
 * Return: 1 if little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int num = one;
	char *endian = (char *)&num;

	if (*endian)
	{
		return (one);
	}
	else
	{
		return (zero);
	}
}

