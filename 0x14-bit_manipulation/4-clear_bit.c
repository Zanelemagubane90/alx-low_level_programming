#include "main.h"

/**
 *clear_bit - program sets the value of a bit to 0.
 *at a given index.
 *@n: pointer of an unsigned long int.
 *@index: index of the bit.
 *
 *Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int num_int;

	if (index > 63)
		return (-1);

	num_int = 1 << index;

	if (*n & num_int)
		*
		n ^= num_int;

	return (1);
}
