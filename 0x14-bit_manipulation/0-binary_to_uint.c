#include <stddef.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: Pointer to a string of 0 to 1 chars
 * Return: Converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[x] - '0');
	}
	return (dec_val);
}
